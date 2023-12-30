/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 06:56:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fTrap1("Mons_01");
	FragTrap	fTrap2("Mons_02");

	std::cout << std::endl;

	fTrap1.highFivesGuys();
	std::cout << std::endl;
	fTrap2.attack(fTrap1.getName());
	fTrap2.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
