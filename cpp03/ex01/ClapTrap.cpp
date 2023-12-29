/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:02:50 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:07:16 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Anna"), _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
	std::cout << "ClapTrap:: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name) , _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
	std::cout << "ClapTrap:: Constructor with " << this->_name << " as parameter called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap:: Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap:: Destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;	
}

int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;	
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack. No hit points or energy left!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if (amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage. "
			<< "Remaining hit points: " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points or energy left!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " was repaired for " << amount << " points of health!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired. No hit points or energy left!" << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	ClapTrap::showStatus(void) const
{
	std::cout << "Status of " << this->_name << ":\n";
	std::cout << " " << this->_energyPoints << " Energy points, "
	<< this->_hitPoints << " Hit points (health) and "
	<< this->_attackDamage << " points of Damage." << std::endl;
}
