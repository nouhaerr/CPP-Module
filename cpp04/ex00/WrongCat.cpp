/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:44:11 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:44:12 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat is created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    *this = copy;
    std::cout << "Copy constructor for WrongCat is created" << std::endl;
}

WrongCat&   WrongCat::operator=(WrongCat const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		WrongAnimal::operator=(copy);
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat is called" << std::endl;
}

std::string	WrongCat::getType(void)const
{
	return this->type;
}

void	WrongCat::makeSound()const
{
	std::cout << "WrongCat:: meows, meows" << std::endl;
}