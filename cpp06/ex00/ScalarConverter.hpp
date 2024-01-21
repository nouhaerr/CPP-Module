/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:22:47 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/21 23:45:09 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Helper.hpp"
# include <cstdlib>
# include <limits>

class Helper;

class ScalarConverter {

	private:
		ScalarConverter();

	public:
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter&	operator=(ScalarConverter const &copy);
		~ScalarConverter();

		static void	convert(const std::string &arg);
		static void	toChar(const std::string &litteral);
		static void	toInt(const std::string &litteral);
		static void	toFloat(const std::string &litteral);
		static void	toDouble(const std::string &litteral);
};


#endif
