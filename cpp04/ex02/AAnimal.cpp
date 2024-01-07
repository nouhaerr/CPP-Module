/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:36 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:41:37 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor is created" << std::endl;
	this->type = "default_AAnimal";
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	std::cout << "AAnimal copy constructor is created" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType(void)const
{
	return this->type;
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}
