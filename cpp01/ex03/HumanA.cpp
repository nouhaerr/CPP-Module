/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:05 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/15 19:21:15 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weaponName) : _name(name), weapon(weaponName){}

HumanA::~HumanA()
{
	std::cout << this->_name << " is destroyed." << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}
