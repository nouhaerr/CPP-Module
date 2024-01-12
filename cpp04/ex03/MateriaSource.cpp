/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:53:15 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 02:01:24 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource:: Default constructor is called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
	std::cout << "MateriaSource:: Copy constructor is called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materia[i]) {
				delete this->materia[i];
				this->materia[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (copy.materia[i])
				this->materia[i] = copy.materia[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
	std::cout << "MateriaSource:: Destructor is called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && type == this->materia[i]->getType())
			return (this->materia[i]->clone());
	}
	return NULL;
}
