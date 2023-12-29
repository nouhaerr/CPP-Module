/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 07:14:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:03:58 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Diamond_clap_name") , _name("DiamondTrap")
{
	std::cout << "DiamondTrap:: Default constructor called" << std::endl;
	ClapTrap::_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),  ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap:: Constructor with " << _name << " as parameter called" << std::endl;
	ClapTrap::_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap:: Destructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "DiamondTrap:: Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &other)
{
	this->_name = other.getName();
	ClapTrap::operator=(other);
	return *this;
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
	std::cout << "DiamondTrap Status of " << getName() << ":\n";
	std::cout << " " << getEnergyPoints() << " Energy points, "
	<< getHitPoints() << " Hit points (health) and "
	<< getAttackDamage() << " points of Damage." << std::endl;
}
