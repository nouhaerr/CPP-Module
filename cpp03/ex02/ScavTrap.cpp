/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:01:36 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 05:27:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "Default_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap:: Default constructor is created" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
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
		this->_name = other.getName();
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap:: Destructor called for " << this->_name << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack. No hit points or energy left!" << std::endl;
}

void	ScavTrap::guardGate()
{
	 std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;
}
