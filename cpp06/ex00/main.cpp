/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:22:51 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/21 19:18:01 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char *av[])
{
	std::string	arg;

	if (ac != 2)
	{
		std::cerr << "Wrong nbr of arguments !!" << std::endl;
		return (1);
	}

	arg = av[1];
	ScalarConverter::convert(arg);

	return 0;
}
