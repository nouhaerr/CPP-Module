/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:12:38 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/24 09:07:19 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}
Intern	Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern() {}

static AForm*	cloneShrubberyCreationForm(const std::string target) {
	return (new ShrubberyCreationForm(target));
}

static AForm*	cloneRobotomyRequestForm(const std::string target) {
	return (new RobotomyRequestForm(target));
}

static AForm*	clonePresidentialPardonForm(const std::string target) {
	return (new PresidentialPardonForm(target));
}

const char*	Intern::NameNotFound::what() const throw() {
	return "Intern cannot found a form with this name.";
}


AForm*	Intern::makeForm(const std::string formName, const std::string target) {
	AForm	*(*formFunct[])(const std::string target) = {
		&cloneShrubberyCreationForm,
		&cloneRobotomyRequestForm,
		&clonePresidentialPardonForm
		};

	std::string name[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++)
	{
		if (name[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formFunct[i](target);
		}
	}
	throw (Intern::NameNotFound());
	return NULL;
}
