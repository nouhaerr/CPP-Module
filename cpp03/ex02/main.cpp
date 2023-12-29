/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:04:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 06:54:34 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	*s = new FragTrap("Lola");

	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		s->attack("Dina");
		s->beRepaired(1);
		s->takeDamage(100);
		s->afficheStatus();
		std::cout << std::endl;
	}

	delete s;
	std::cout << std::endl;

	return (0);
}
