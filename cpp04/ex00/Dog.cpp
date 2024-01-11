/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:34 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/10 21:01:35 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog:: Default constructor is created" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Dog:: Copy constructor is created" << std::endl;
}

Dog&	Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		Animal::operator=(copy);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog:: Destructor is called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Dog:: Haou, Haou, Haaw" << std::endl;
}
