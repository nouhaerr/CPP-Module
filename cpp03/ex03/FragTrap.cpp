/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:33 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:05:50 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap:: Default constructor called" << std::endl;
	setName("FRAG");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->_name = name;
	std::cout << "FragTrap:: Constructor with " << name << " as parameter called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap:: Destructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap:: Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{ 
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, give me some high fives!" << std::endl;
}
