/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:09:52 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/21 00:46:43 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : weapon(NULL){}

HumanB::HumanB(const std::string &name) : _name(name), weapon(NULL){}

HumanB::~HumanB()
{
	std::cout << this->_name << " is destroyed." << std::endl;
}

void	HumanB::attack(void)const
{
	if (this->weapon)
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon to attack." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
