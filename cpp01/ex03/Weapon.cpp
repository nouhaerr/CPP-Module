/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/21 03:34:40 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(const std::string weaponType) : _type(weaponType){};

Weapon::~Weapon(){}

const std::string&	Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}

