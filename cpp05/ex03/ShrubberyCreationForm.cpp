/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/24 15:02:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(), _target("Home") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy) {
	this->_target = copy._target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
		AForm::operator=(copy);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw (AForm::GradeTooLowException());
	else {
			std::string		outputFile;
			std::ofstream	outf;

			outputFile = this->_target + "_shrubbery";
			outf.open(outputFile.c_str());
			if (!outf.is_open())
				throw std::ios_base::failure("Failed to open the file for writing");
			outf << std::endl;
			outf << "                ,@@@@@@@, " << std::endl;
			outf << "        ,,,.   ,@@@@@@/@@,  .oo8888o.	" << std::endl;
			outf << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o	" << std::endl;
			outf << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'	" << std::endl;
			outf << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'	" << std::endl;
			outf << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'	" << std::endl; 
			outf << "    `&%\\ ` /%&'    |.|        \\ '|8'	" << std::endl;
			outf << "        |o|        | |         | |	" << std::endl;
			outf << "	    |.|        | |         | |	" << std::endl;
			outf << "     \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

			outf.close();
	}
}
