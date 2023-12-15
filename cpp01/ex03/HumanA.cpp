/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:05 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/15 18:34:16 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void){}

HumanA::HumanA(const std::string& name, const std::string& weaponName) : _name(name), weapon(weaponName){}

HumanA::~HumanA(){}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << std::endl;
}
