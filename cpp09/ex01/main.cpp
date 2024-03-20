/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/20 07:09:35 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Error: Wrong RPN expression!",1);

	try {
		RPN	rpn;
		rpn.checkExpression(av[1]);
		rpn.showResult();
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
