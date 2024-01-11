/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:44:56 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/10 21:18:06 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal:: default constructor is created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal:: Copy constructor is" << std::endl;
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
	std::cout << "WrongAnimal:: destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return this->type;
}

void	WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimal:: Sound!!" << std::endl;
}
