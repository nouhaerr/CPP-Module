/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 05:36:26 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Error: Wrong RPN expression!\n",1);

	try {
		RPN	rpn;
		rpn.checkExpression(av[1]);
		rpn.execExpression(av[1]);
		rpn.showResult();
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
