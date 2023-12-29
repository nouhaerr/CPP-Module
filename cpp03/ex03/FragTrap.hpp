/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:48 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:03:08 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	protected:
		std::string		_otherName;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_damage;

	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		FragTrap&	operator=(FragTrap const &other);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif
