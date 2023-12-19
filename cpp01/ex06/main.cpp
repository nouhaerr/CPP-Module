/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:18:47 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:18:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Wrong nbr of arguments!!" << std::endl;
		return (1);
	}

	std::string	level(argv[1]);
	Harl		harl;

	harl.complain(level);

	return (0);
}
