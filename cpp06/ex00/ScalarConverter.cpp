/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:22:49 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/21 23:52:04 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const &copy)
{
	(void)copy;
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

void	ScalarConverter::convert(const std::string &arg)
{
	toChar(arg);
	toInt(arg);
	toFloat(arg);
	// toDouble(arg);
}

void	ScalarConverter::toChar(const std::string &litteral)
{
	if (litteral.size() == 1 && std::isprint(litteral[0]) && litteral[0] != '0')
		std::cout << "char: '" << litteral[0] << "'" <<std::endl;
	else
	{
		int	e = static_cast<int> (std::atof(litteral.c_str()));

		if (litteral[0] != '0' && std::isprint(e))
			std::cout << "char: '" << static_cast<char>(e) << "'" << std::endl;
		else if (!Helper::isdigitstring(litteral))
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(e))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
}

void	ScalarConverter::toInt(const std::string &litteral)
{
	int	e = static_cast<int> (std::atof(litteral.c_str()));

	if (Helper::isdigitstring(litteral))
	{
		try {
			e = std::stoi(litteral);
			std::cout << "int: " << e << std::endl;
		}
		catch (const std::out_of_range&)
		{	std::cout << "Conversion impossible pour l'entier (overflow)." << std::endl;}
	}
	else
	{
		if (std::isalpha(litteral[0]) && litteral.length() > 1)
			std::cout << "int: impossible" << std::endl;
		else if (litteral.size() == 1 && std::isalpha(litteral[0]))
		{
			int e = static_cast<int>(litteral[0]);
			std::cout << "int: " << e << std::endl;
		}
		else
			std::cout << "int: " << e << std::endl;
	}
}

void	ScalarConverter::toFloat(const std::string &litteral)
{
	float e = std::atof(litteral.c_str());

	if (Helper::isdigitstring(litteral))
		std::cout << "float: " << e << std::endl;
	else
	{
		
	}
}

// void	ScalarConverter::toDouble(const std::string &litteral)
// {}
