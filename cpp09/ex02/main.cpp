/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:42:50 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 08:25:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	try {
		if (ac == 1)
			throw std::runtime_error("Error: where is the arguments");
		PmergeMe	p;
		p.checkArgs(ac, av);
		p.pairwiseNbrs();
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
}

