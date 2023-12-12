/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:00:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/12 15:26:01 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	private:
		std::string	name;
	
	public:
		Zombie(void);
		Zombie(std::string zombieName);
		~Zombie();
		void	announce(void) const;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
