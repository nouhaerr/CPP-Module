/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:38 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 00:58:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy) {
	this->_target = copy._target;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
		AForm::operator=(copy);
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->getStatus())
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > 45)
		throw (AForm::GradeTooLowException());
	else {
		srand(time(NULL));
		if (std::rand() % 2)
			std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;	
	}
}