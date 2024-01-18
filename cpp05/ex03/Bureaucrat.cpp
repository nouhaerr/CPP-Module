/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:48 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:05:26 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &copy) {
	if (this != &copy)
		setGrade(copy.getGrade());
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::decrementGrade(void)
{
	this->setGrade(this->_grade + 1);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!!";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!!";
}

void	Bureaucrat::signForm(AForm &f) const
{
	try {
			f.beSigned(*this);
			std::cout << this->_name << " signed " << f.getName() << "\n";
		}
	catch (const AForm::GradeTooLowException& e) {
		std::cout << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << ".\n";
		}
}

void	Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << *this << " executed " << form << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << form << " can't be executed because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade(); 
	return os;
}

