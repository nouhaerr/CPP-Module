/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/23 08:14:03 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string filename) {
	std::ifstream	ifile;
	ifile.open(filename.c_str());
	if (!ifile.is_open())
		throw std::runtime_error("Error: could not open file.");
	else {
		std::string	line;
		std::getline(ifile, line);

		while (std::getline(ifile, line))
		{
			int	delimiter = line.find(',', 0);
			std::string	key = line.substr(0, delimiter);
			double	value = strtod(line.substr(delimiter+ 1).c_str(), NULL);
			this->_dataMap[key] = value;
		}
	}
	ifile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange&    BitcoinExchange::operator=(BitcoinExchange const &copy) {
	if (this != &copy) {
		this->_dataMap = copy._dataMap;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
	if (!this->_dataMap.empty())
		this->_dataMap.clear();
}

void	BitcoinExchange::execute(const char* inputfile) {
	std::ifstream	f;
	std::string		line;

	f.open(inputfile);
	if (!f.is_open())
		throw std::runtime_error("Error: could not open file.");
	else
	{
		try{
			std::getline(f, line);
			if (f.eof() && line.empty())
				throw std::runtime_error("Error: Empty file.");
			if (line.compare("date | value") != 0)
				throw std::runtime_error("Error: Invalid Header.");
		}catch (const std::runtime_error &e){
			std::cerr << e.what() << std::endl;	
		}
		while (std::getline(f, line))
		{
			try {
				std::pair<std::string, double> pair = parseInput(line);
				double ex = getExchange(pair.first);
				if (ex < 0)
					throw std::runtime_error("Error: Invalid date (Bitcoin doesn't exist) => " + pair.first);
				else
					std::cout << pair.first << " => " << pair.second << " = "
							<< (pair.second * ex) << std::endl;
			} catch(const std::exception &e) {
				std::cerr << e.what() << std::endl;
			}
		}
		f.close();
	}
}

double	BitcoinExchange::getExchange(const std::string& date) {
	std::map<std::string, double>::iterator	it = this->_dataMap.lower_bound(date);

	if (it != this->_dataMap.end() && it->first == date)
		return it->second;
	if (it == this->_dataMap.begin())
		return -1;
	--it;
	return it->second;
}

static bool	isNumeric(const std::string str, const std::string &seq) {
	return str.find_first_not_of(seq) == std::string::npos;
}

static void	isValidValue(double &val, const std::string &valueStr) {
	if (valueStr[0] == '.' || valueStr[valueStr.length() - 1] == '.')
		throw std::runtime_error("Error: invalid format.");
	else if (std::count(valueStr.begin(), valueStr.end(), '.') > 1)
		throw std::runtime_error("Error: invalid number.");

	if (val < 0)
		throw std::runtime_error("Error: not a positive number.");
	else if (val > 1000)
		throw std::runtime_error("Error: too large a number.");
}

static void	isValidDate(const std::string &date) {
	std::list<std::string> li;
	std::istringstream	ss(date);
	std::string	tok;

	while (std::getline(ss, tok, '-'))
		li.push_back(tok);
	if (li.size() != 3)
		throw std::runtime_error("Error: bad date input  => " + date);
	for (std::list<std::string>::iterator it = li.begin(); it != li.end(); it++)
	{
		if (!isNumeric(*it, "0123456789"))
			throw std::runtime_error("Error: bad input => " + date);
	}

	std::list<std::string>::iterator iter = li.begin();
	std::string	year(*iter);
	std::string	month(*(++iter));
	std::string day(*(++iter));

	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
		throw std::runtime_error("Error: bad date format => " + date);
	int y;
	std::istringstream(year) >> y;
	if (y < 2009 || y > 2022)
		throw std::runtime_error("Error: bad input (check the date year) => " + date);

	int	d;
	std::istringstream(day) >> d;
	if (d <= 0 || d > 31)
		throw std::runtime_error("Error: bad input (check the date day) => " + date);

	int	m;
	std::istringstream(month) >> m;
	if (m <= 0 || m > 12)
		throw std::runtime_error("Error: bad input (check the date month) => " + date);
	if (month == "02" && !(y % 4) && d > 29)
		throw std::runtime_error("Error: bad input (A leap year but more than 366days!) => " + date);
	else if (month == "02" && y % 4 && d > 28)
		throw std::runtime_error("Error: bad input (Not a leap year but more than 365days) => " + date);
	else if ((month == "03" || month == "08" || m == 10) && d > 30)
		throw std::runtime_error("Error: bad input => " + date);

}

std::pair<std::string, double>	BitcoinExchange::parseInput(std::string line) {
	
	size_t delimiter = line.find('|');

	if (line[0] == '|' || line[line.length() - 1] == '|' || delimiter == std::string::npos)
		throw std::runtime_error("Error: bad input => " + line);
	else if (line[delimiter - 1] != ' ' || line[delimiter + 1] != ' ')
		throw std::runtime_error("Error: bad format");

	std::string	valueStr = line.substr(delimiter + 2);
	if (!isNumeric(valueStr, ".0123456789")
		&& (line[delimiter + 2] != '-' && line[delimiter + 2] != '+'))
		throw std::runtime_error("Error: not an int or float value");

	std::string key = line.substr(0, delimiter - 1);
	double value = strtod(valueStr.c_str(), NULL);
	isValidDate(key);
	isValidValue(value, valueStr);
	return std::make_pair(key, value);
}
