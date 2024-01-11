/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:26:30 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/10 21:14:37 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain:: Default constructor is called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Brain:: Copy constructor is called" << std::endl;
}

Brain&	Brain::operator=(Brain const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain:: Destructor called" << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i=0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

const std::string	*Brain::getIdeas(void) const
{
	return this->ideas;
}