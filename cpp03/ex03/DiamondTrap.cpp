/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 07:14:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 06:17:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), _name("Default_name")
{
	ClapTrap::_hitPoints = FragTrap::_hitPts;
	ClapTrap::_energyPoints = ScavTrap::_energyPts;
	ClapTrap::_attackDamage = FragTrap::_damage;
	std::cout << "DiamondTrap:: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),  ScavTrap(name), FragTrap(name), _name(name)
{
	ClapTrap::_hitPoints = FragTrap::_hitPts;
	ClapTrap::_energyPoints = ScavTrap::_energyPts;
	ClapTrap::_attackDamage = FragTrap::_damage;
	std::cout << "DiamondTrap:: Constructor with " << _name << " as parameter called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap:: Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		FragTrap::operator=(other);
        ScavTrap::operator=(other);
	}
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

void	DiamondTrap::showStatus(void) const
{
	std::cout << "DiamondTrap Status of " << this->_name << ":\n";
	std::cout << " " << this->_energyPoints << " Energy points, "
	<< this->_hitPoints << " Hit points (health) and "
	<< this->_attackDamage << " points of Damage." << std::endl;
}
