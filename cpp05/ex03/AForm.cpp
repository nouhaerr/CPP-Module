/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:08:21 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Sam"), _status(false), _gradeRequiredToSign(1), _gradeRequiredToExecute(150)
{}

AForm::AForm(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute) : _name(name),
	_gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
	this->_status = false;
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw (AForm::GradeTooHighException());
	else if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(AForm const &copy) : _name(copy._name),
	_gradeRequiredToSign(copy._gradeRequiredToSign), _gradeRequiredToExecute(copy._gradeRequiredToExecute)
{
	this->_status = copy._status;
}

AForm&	AForm::operator=(AForm const &copy)
{
	if (this != &copy)
	{
		this->_status = copy._status;
	}
	return *this;
}

AForm::~AForm() {}

std::string	AForm::getName(void) const
{
	return this->_name;
}

bool	AForm::getStatus(void) const
{
	return this->_status;
}

int	AForm::getGradeRequiredToSign(void) const
{
	 return this->_gradeRequiredToSign;
}

int	AForm::getGradeRequiredToExecute(void) const
{
	return this->_gradeRequiredToExecute;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Form:: Grade is too high!!";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Form:: Grade is too low!!";
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return "Form Not signed!";
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_gradeRequiredToSign)
		this->_status = true;
	else
		throw (AForm::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& os, const AForm& form)
{
	os << "Form: " << form.getName() << "\n";
	os << "Signed: " << (form.getStatus() ? "Yes" : "No") << "\n";
	os << "Grade Required To Sign: "<< form.getGradeRequiredToSign() << "\n";
	os << "Grade Required To Execute: " << form.getGradeRequiredToExecute();
	return os;
}
