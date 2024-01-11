/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:12 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 03:51:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat:: Default Constructor is created" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Cat:: Copy constructor is created" << std::endl;
}

Cat&	Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(copy.brain));
		Animal::operator=(copy);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat:: Destructor is called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat:: meows, meows" << std::endl;
}

void	Cat::setBrain(Brain *brain)
{
	this->brain = brain;
}

Brain	*Cat::getBrain(void) const
{
	return this->brain;
}
