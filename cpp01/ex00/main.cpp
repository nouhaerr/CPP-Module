/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:30:08 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:19:33 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z("Foo");

	z.announce();
	
	Zombie	*zombie = newZombie("newZombie");

	zombie->announce();
	delete zombie;
	randomChump("Chump");
	return (0);
}
