/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:30:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/24 11:43:52 by nerrakeb         ###   ########.fr       */
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
	AForm* scf;
	try {
		Bureaucrat a("Juan", 1);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrrt", "plant");
		a.signForm(*scf);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete rrf;
	delete scf;
	return 0;
}
