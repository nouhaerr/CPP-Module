/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:34 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:43:35 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor for Dog is created" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor for Dog is created" << std::endl;
}

Dog&	Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		this->brain = new Brain(*(copy.brain));
		Animal::operator=(copy);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor for Dog is called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Dog:: Haou, Haou, Haaw" << std::endl;
}

void	Dog::setBrain(Brain *brain)
{
	this->brain = brain;
}

Brain	*Dog::getBrain(void) const
{
	return this->brain;
}
