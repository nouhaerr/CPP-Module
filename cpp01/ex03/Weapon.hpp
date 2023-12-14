/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:10:12 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/14 20:37:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

	private :
		std::string	_type;

	public :
		Weapon(void);
		~Weapon();
		const	std::string& getType(void) const;
		void	setType(const std::string& type);
};

#endif
