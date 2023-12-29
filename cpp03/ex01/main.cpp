/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:02:24 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:33:32 by nerrakeb         ###   ########.fr       */
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
		s->showStatus();
		std::cout << std::endl;
	}
	s->guardGate();
	// ScavTrap	d;
	// ScavTrap	a(d);

	// std::cout << std::endl;
	// a.attack("Fatine");
	// a.beRepaired(1);
	// a.takeDamage(100);
	// a.attack("Fatine");
	// a.showStatus();
	// a.guardGate();
	std::cout << std::endl;
	delete s;
	std::cout << std::endl;

	return 0;
}
