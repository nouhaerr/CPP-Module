/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/12 22:44:54 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
			Bureaucrat	b("Cosmetics", 1);
			std::cout << b << std::endl;
			Bureaucrat	b1("Cosmetics", 180);
			std::cout << b1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
