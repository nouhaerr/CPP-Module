/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:01:36 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 04:49:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap:: Default constructor called" << std::endl;
	setName("Hanane");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ScavTrap:: Constructor with " << name << " as parameter called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap:: Destructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap:: Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{ 
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack. No hit points or energy left!" << std::endl;
}

void	ScavTrap::guardGate()
{
	 std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;
}
