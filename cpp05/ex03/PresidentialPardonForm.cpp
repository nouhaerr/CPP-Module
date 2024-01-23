/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:14:09 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 18:24:36 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(), _target("Visa")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PardonForm", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy) {
	this->_target = copy._target;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
	if (this != &copy)
	{
		this->_target = copy._target;
		AForm::operator=(copy);
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getStatus())
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw (AForm::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
