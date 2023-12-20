/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:09:55 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/21 00:30:08 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	private :
		std::string	_name;
		Weapon*		weapon;

	public :
		HumanB(void);
		HumanB(const std::string &name);
		~HumanB();
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
};

#endif
