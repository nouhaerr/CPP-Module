/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:07 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/15 18:31:05 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA.HPP

#include "Weapon.hpp"

class HumanA{
	
	private :
		std::string	_name;
		Weapon		weapon;

	public :
		HumanA(void);
		HumanA(const std::string& name, const std::string& weaponName);
		~HumanA();
		void	attack(void) const;
		void	setName(std::string const & name);
};


#endif
