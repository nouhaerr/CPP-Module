/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:36 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:41:37 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor is created" << std::endl;
	this->type = "default_Animal";
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor is created" << std::endl;
}

Animal&	Animal::operator=(Animal const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void)const
{
	return this->type;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound()const
{
	return ;
}
