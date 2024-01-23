/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:30:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 21:07:38 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	try {
		AForm* scf;
		Bureaucrat a("Juan", 1);
		scf = someRandomIntern.makeForm("shrrt", "plant");
		a.signForm(*scf);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
