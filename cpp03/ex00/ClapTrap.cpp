/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:36:56 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/23 23:36:57 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
	std::cout << "ClapTrap:: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name) , _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
	std::cout << "ClapTrap:: Constructor with name as parameter called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap:: Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap:: Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	return *this;
}

