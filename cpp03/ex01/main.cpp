/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:02:24 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 05:40:35 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	ScavTrap	*s = new ScavTrap;

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		s->attack("Riad");
		s->takeDamage(100);
		s->showStatus();
		std::cout << std::endl;
	}
	s->guardGate();

	std::cout << std::endl;
	delete s;

	return 0;
}
