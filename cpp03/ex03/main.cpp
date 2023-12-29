/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 09:48:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	*s = new DiamondTrap("Lola");

	std::cout << std::endl;

	s->showStatus();
	std::cout << std::endl;
	for (int i = 0; i < 1; i++)
	{
		s->attack("Dina");
		s->beRepaired(1);
		s->takeDamage(100);
		s->showStatus();
		std::cout << std::endl;
	}
	s->whoAmI();
	std::cout << std::endl;
	delete s;
	std::cout << std::endl;

	return (0);
}
