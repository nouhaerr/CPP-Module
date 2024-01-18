/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:30:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:10:50 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main2(void)
{
	AForm* shrubbery = new ShrubberyCreationForm("home");
	AForm* robot = new RobotomyRequestForm("Alice");
	AForm* president = new PresidentialPardonForm("President");
	try {
		Bureaucrat	b("Lucy", 4);

		b.signForm(*shrubbery);
		b.executeForm(*shrubbery);
		b.signForm(*robot);
		robot->execute(b);
		b.signForm(*president);
		president->execute(b);
		
	}
	catch (const std::exception& e) {

		std::cout << std::endl;
		std::cerr << "Exception: " << e.what() << "\n";
	}
	delete shrubbery;
	delete robot;
	delete president;
	return 0;
}

int main()
{
	main2();
	// system("leaks form");
	return 0;
}
