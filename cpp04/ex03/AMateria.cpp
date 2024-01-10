/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:27:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/08 20:27:11 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->type = "";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria&	AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

AMateria::~AMateria()
{}

std::string const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
