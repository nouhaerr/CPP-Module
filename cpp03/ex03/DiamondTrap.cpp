/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 07:14:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:48:11 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name") , _name("DiamondTrap")
{
	ClapTrap::_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_hitPoints;
	std::cout << "DiamondTrap:: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),  ScavTrap(name), FragTrap(name), _name(name)
{
	ClapTrap::_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap:: Constructor with " << _name << " as parameter called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap:: Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &other)
{
	this->_name = other.getName();
	ClapTrap::operator=(other);
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap:: Destructor called for " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: " << this->_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{	
	ScavTrap::attack(target);
}

void	DiamondTrap::showStatus(void) const
{
	std::cout << "DiamondTrap Status of " << this->_name << ":\n";
	std::cout << " " << this->getEnergyPoints() << " Energy points, "
	<< this->getHitPoints() << " Hit points (health) and "
	<< this->getAttackDamage() << " points of Damage." << std::endl;
}
