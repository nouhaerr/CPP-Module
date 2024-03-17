#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string filename) {
	std::ifstream	ifile;
	ifile.open(filename.c_str());
	if (!ifile.is_open())
		throw std::ios_base::failure("Error: could not open file.");
	else {
		std::string	line;
		std::getline(ifile, line);

		while (std::getline(ifile, line))
		{
			int	delimiter = line.find(',', 0);
			std::string	key = line.substr(0, delimiter);
			double	value = strtod(line.substr(delimiter+ 1).c_str(), NULL);
				// insert data into map
			this->_data[key] = value;
		}
	}
	ifile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange&    BitcoinExchange::operator=(BitcoinExchange const &copy) {
	if (this != &copy) {
		this->_data = copy._data;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
	this->_data.clear();
}

void	BitcoinExchange::execute(const char* inputfile) {
	std::ifstream	f;
	std::string		line;

	f.open(inputfile);
	if (!f.is_open())
		throw std::ios_base::failure("Error: could not open file.");
	else
	{
		std::getline(f, line);
		if (line != "date | value")
			throw std::runtime_error("Error: wrong input.");
		while (std::getline(f, line))
		{
			try {
				std::pair<std::string, double> pair = parseInput(line);
				
				// showResult();
			} catch(const std::exception &e) {
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

static bool	isNumeric(const std::string str, const std::string &seq) {
	return str.find_first_not_of(seq) == std::string::npos;
}

static void	isValidValue(double &val, const std::string &valueStr) {
	if (valueStr[0] == '.' || valueStr[valueStr.length() - 1] == '.')
		throw std::runtime_error("Error: bad format.");
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
		throw std::runtime_error("Error: invalid date format.");
	for (std::list<std::string>::iterator it = li.begin(); it != li.end(); it++)
	{
		if (!isNumeric(*it, "0123456789"))
			throw std::runtime_error("Error: invalid date.");
	}

	std::list<std::string>::iterator iter = li.begin();
	std::string	year(*iter);
	std::string	month(*(++iter));
	std::string day(*(++iter));

	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
		throw std::runtime_error("Error: invalid date format.");
	int y;
	std::istringstream(year) >> y;
	if (y < 2009 || y > 2022)
		throw std::runtime_error("Error: invalid date.");

	int	d;
	std::istringstream(day) >> d;
	if (d <= 0 || d > 31)
		throw std::runtime_error("Error: invalid date (check the day).");

	int	m;
	std::istringstream(month) >> m;
	if (m <= 0 || m > 12)
		throw std::runtime_error("Error: invalid date (check the month).");
	if (month == "02" && !(y % 4) && d > 29)
		throw std::runtime_error("Error: invalid date (A leap year but more than 366days!).");
	else if (month == "02" && y % 4 && d > 28)
		throw std::runtime_error("Error: invalid date (Not a leap year but more than 365days).");
	else if ((month == "03" || month == "08" || m == 10) && d > 30)
		throw std::runtime_error("Error: invalid date.");

}

std::pair<std::string, double>	BitcoinExchange::parseInput(std::string line) {
	
	size_t delimiter = line.find('|');
	char	*p;

	if (line[0] == '|' || line[line.length() - 1] == '|' || delimiter == std::string::npos) //a revoir
		throw std::runtime_error("Error: bad input => " + line);
	else if (line[delimiter - 1] != ' ')
		throw std::runtime_error("Error: bad format");

	std::string	valueStr = line.substr(delimiter + 2);
	if (!isNumeric(valueStr, ".0123456789")
		&& (line[delimiter + 2] != '-' && line[delimiter + 2] != '+'))
		throw std::runtime_error("Error: not an int or float value");

	std::string key = line.substr(0, delimiter - 1);
	double value = strtod(valueStr.c_str(), &p);
	isValidDate(key);
	isValidValue(value, valueStr);
	return std::make_pair(key, value);
}


// std::string	BitcoinExchange::trim(const std::string& str) {
// 	size_t first = str.find_first_not_of(' ');
// 	if (std::string::npos == first)
// 		return str;

// 	size_t last = str.find_last_not_of(' ');
//     return str.substr(first, (last - first + 1));
// }
