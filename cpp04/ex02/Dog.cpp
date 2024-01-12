/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:34 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/12 20:39:37 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog:: Default constructor is created" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy) : AAnimal(copy)
{
	std::cout << "Dog:: Copy constructor is created" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(copy.brain));
		AAnimal::operator=(copy);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog:: Destructor is called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Dog:: Haou, Haou, Haaw" << std::endl;
}

void	Dog::setBrain(Brain *newBrain)
{
	if (this->brain != newBrain)
	{
		if (this->brain)
			delete brain;
		if (newBrain) {
			this->brain = new Brain(*newBrain);
		}
		else
			this->brain = new Brain();
	}
}

Brain	*Dog::getBrain(void) const
{
	return this->brain;
}
