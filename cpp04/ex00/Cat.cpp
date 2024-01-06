/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:12 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:43:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Default Constructor for Cat is created" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor for Cat is created" << std::endl;
}

Cat&	Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		Animal::operator=(copy);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat is called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat:: meows, meows" << std::endl;
}
