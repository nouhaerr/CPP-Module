/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:19:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:19:05 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] messages refer to log statements or output messages";
	std::cout << " that are specifically intended for debugging purposes.";
	std::cout << " They help identify issues, trace the flow of execution, ";
	std::cout << "and understand the values of variables at different points in the code." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] messages refer to log statements or output messages";
	std::cout << " that provide general information about the execution of a program." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]: Input data is None!! Proceed with caution." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	size_t	i;
	harlFunct	fct[4];

	std::string	comment[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	fct[0] = &Harl::debug;
	fct[1] = &Harl::info;
	fct[2] = &Harl::warning;
	fct[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (comment[i] == level)
		{
			(this->*fct[i])();
			return ;
		}
		i++;
	}
	std::cerr << "Level Not Found!" << std::endl;
}
