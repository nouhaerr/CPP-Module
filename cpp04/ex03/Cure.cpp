/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:50:46 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 02:00:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	this->type = "cure";
	std::cout << "Cure:: Constructor is called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	*this = copy;
}

Cure&	Cure::operator=(Cure const &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure:: Destructor is called" << std::endl;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
