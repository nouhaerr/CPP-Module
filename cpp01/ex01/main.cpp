/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:11:37 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/14 18:18:55 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nbr = 5;
	Zombie	*zombie = zombieHorde(nbr, "zombieHorde");

	if (nbr > 0)
	{
		for (int i = 0; i < nbr; i++)
			zombie[i].announce();
	}
	delete [] zombie;
	return (0);
}
