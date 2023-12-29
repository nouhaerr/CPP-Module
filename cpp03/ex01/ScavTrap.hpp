/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:01:28 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 05:02:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();
		ScavTrap&	operator=(ScavTrap const &other);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
