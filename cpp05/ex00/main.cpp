/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 18:14:59 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat	b("Cosmetics", 2);
		b.incrementGrade();
		std::cout << b << std::endl;
		Bureaucrat	b1("Mohamed", 150);
		std::cout << b1 << std::endl;
		b1.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
