/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:02:24 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 06:14:27 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	*s = new ScavTrap("Mohamed");

	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
	{
		s->attack("Riad");
		s->takeDamage(100);
		s->afficheStatus();
		std::cout << std::endl;
	}
	ScavTrap	d;
	ScavTrap	a(d);

	std::cout << std::endl;
	a.attack("Fatine");
	a.beRepaired(1);
	a.takeDamage(100);
	a.attack("Fatine");
	a.afficheStatus();
	std::cout << std::endl;
	delete s;
	std::cout << std::endl;

	return 0;
}
