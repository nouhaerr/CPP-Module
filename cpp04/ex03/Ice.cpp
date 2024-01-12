/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:50:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 02:00:24 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	this->type = "ice";
	std::cout << "Ice:: Constructor is called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	*this = copy;
	std::cout << "Cure:: Copy constructor is called" << std::endl;
}

Ice&	Ice::operator=(Ice const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice:: Destructor is called" << std::endl;
}
	
AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
