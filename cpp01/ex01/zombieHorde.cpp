/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:07:09 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/14 18:19:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "error: nbr should be positive!" << std::endl;
		exit(0);
	}
	Zombie *z = new Zombie[N];

	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return (z);
}
