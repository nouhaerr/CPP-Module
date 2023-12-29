/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:37:12 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/29 01:31:23 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	c;
	ClapTrap	b("Riad");

	c.attack("Nouha");
	c.beRepaired(2);
	b.attack("Mohamed");
	b.takeDamage(3);
	b.attack("Mohamed");
	b.beRepaired(1);
	std::cout << std::endl;
	c.afficheStatus();

	return 0;
}
