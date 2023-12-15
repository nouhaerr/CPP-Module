/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:07 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/15 19:20:42 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	
	private :
		std::string	_name;
		Weapon		weapon;

	public :
		HumanA(void);
		HumanA(const std::string& name, const Weapon& weaponName);
		~HumanA();
		void	attack(void) const;
		void	getWeaponType(Weapon *type);
};


#endif
