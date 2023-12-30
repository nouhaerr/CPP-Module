/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:33 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 06:12:59 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_otherName = "Default_name";
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_damage = 30;
	ClapTrap::_name = this->_otherName;
	ClapTrap::_hitPoints = this->_hitPts;
	ClapTrap::_energyPoints = this->_energyPts;
	ClapTrap::_attackDamage = this->_damage;
	std::cout << "FragTrap:: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->_otherName = name;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_damage = 30;
	ClapTrap::_hitPoints = this->_hitPts;
	ClapTrap::_energyPoints = this->_energyPts;
	ClapTrap::_attackDamage = this->_damage;
	std::cout << "FragTrap:: Constructor with " << name << " as parameter called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap:: Copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{ 
	if (this != &other)
	{
		this->_otherName = other.getName();
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap:: Destructor called for " << this->_otherName << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey " << _otherName << ", give me some high fives!" << std::endl;
}
