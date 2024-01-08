/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:26:30 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/08 20:26:31 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Copy constructor for Brain is called" << std::endl;
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
	std::cout << "Destructor called for Brain" << std::endl;
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