/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:01:28 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:03:12 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	protected:
		std::string		_otherName;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_damage;

	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		ScavTrap&	operator=(ScavTrap const &other);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
