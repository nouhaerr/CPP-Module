/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 06:19:42 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	DiamondTrap	*s = new DiamondTrap("Lola");

	std::cout << std::endl;
	s->showStatus();
	s->attack("Dina");
	std::cout << std::endl;
	s->whoAmI();
	s->highFivesGuys();
	std::cout << std::endl;
	delete s;

	return (0);
}
