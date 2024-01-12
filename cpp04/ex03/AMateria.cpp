/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:27:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 02:01:15 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->type = "";
	std::cout << "AMateria:: Default constructor is called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria:: Constructor with parameters is called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria:: Copy constructor with parameters is called" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria:: Destructor is called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
