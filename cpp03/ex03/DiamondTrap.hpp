/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 07:14:33 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:00:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		~DiamondTrap();
		DiamondTrap(ScavTrap const &other);
		DiamondTrap&	operator=(DiamondTrap const &other);
		void			whoAmI();
		void			attack(const std::string& target);
		void			showStatus(void) const;
};

#endif
