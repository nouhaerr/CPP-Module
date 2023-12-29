/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:02:24 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 04:59:39 by nerrakeb         ###   ########.fr       */
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
		s->afficheStatus();
		std::cout << std::endl;
	}
	delete s;
	std::cout << std::endl;

	return 0;
}
