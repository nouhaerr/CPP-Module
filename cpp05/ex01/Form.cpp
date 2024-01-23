/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 21:29:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Sam"), _status(false), _gradeRequiredToSign(1), _gradeRequiredToExecute(150)
{}

Form::Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute) : _name(name), _status(false),
	_gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw (Form::GradeTooHighException());
	else if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy) : _name(copy._name),
	_gradeRequiredToSign(copy._gradeRequiredToSign), _gradeRequiredToExecute(copy._gradeRequiredToExecute)
{
	this->_status = copy._status;
}

Form&	Form::operator=(Form const &copy)
{
	if (this != &copy) {
		this->_status = copy._status;
	}
	return *this;
}

Form::~Form() {}

std::string	Form::getName(void) const
{
	return this->_name;
}

bool	Form::getStatus(void) const
{
	return this->_status;
}

int	Form::getGradeRequiredToSign(void) const
{
	 return this->_gradeRequiredToSign;
}

int	Form::getGradeRequiredToExecute(void) const
{
	return this->_gradeRequiredToExecute;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form:: Grade is too high!!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form:: Grade is too low!!";
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_gradeRequiredToSign)
		this->_status = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "Form name: " << form.getName() << "\n";
	os << "Signed: " << (form.getStatus() ? "Yes" : "No") << "\n";
	os << "Grade Required To Sign: "<< form.getGradeRequiredToSign() << "\n";
	os << "Grade Required To Execute: " << form.getGradeRequiredToExecute();
	return os;
}
