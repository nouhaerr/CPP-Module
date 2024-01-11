/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:44:11 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/10 21:13:05 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat:: Default constructor is created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    *this = copy;
    std::cout << "WrongCat:: Copy constructor is created" << std::endl;
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
	std::cout << "WrongCat:: Destructor is called" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << "WrongCat:: meow, meow" << std::endl;
}