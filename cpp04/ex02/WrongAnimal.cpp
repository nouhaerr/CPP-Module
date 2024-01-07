/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:44:56 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:44:57 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "Wrong_Animal";
	std::cout << "WrongAnimal default constructor is created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal Copy constructor is" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return this->type;
}

void	WrongAnimal::makeSound()const
{
	return ;
}
