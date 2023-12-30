/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:01:36 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 06:13:45 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_otherName = "Default_name";
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_damage = 20;
	ClapTrap::_name = this->_otherName;
	ClapTrap::_hitPoints = this->_hitPts;
	ClapTrap::_energyPoints = this->_energyPts;
	ClapTrap::_attackDamage = this->_damage;
	std::cout << "ScavTrap:: Default constructor is created" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_otherName = name;
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_damage = 20;
	ClapTrap::_hitPoints = this->_hitPts;
	ClapTrap::_energyPoints = this->_energyPts;
	ClapTrap::_attackDamage = this->_damage;
	std::cout << "ScavTrap:: Constructor with " << name << " as parameter called" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap:: Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
	{
		this->_otherName = other.getName();
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap:: Destructor called for " << this->_otherName << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPts > 0 && this->_energyPts > 0)
	{
		this->_energyPts--;
		std::cout << "ScavTrap " << this->_otherName << " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_otherName << " can't attack. No hit points or energy left!" << std::endl;
}

void	ScavTrap::guardGate()
{
	 std::cout << "ScavTrap " << this->_otherName << " is now in Gatekeeper mode." << std::endl;
}
