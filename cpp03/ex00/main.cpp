/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:37:12 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 06:24:55 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	c;
	ClapTrap	b("Riad");

	std::cout << std::endl;
	c.attack("Nouha");
	c.beRepaired(2);

	std::cout << std::endl;
	b.takeDamage(10);
	b.attack("Mohamed");
	b.beRepaired(1);
	b.showStatus();
	std::cout << std::endl;

	return 0;
}
