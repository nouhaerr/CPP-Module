/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 00:18:10 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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
	else if (executor.getGrade() > 137)
		throw (AForm::GradeTooLowException());
	else {
		try {
			std::string		outputFile;
			std::ofstream	outf;

			outputFile = this->_target + "_shrubbery";
			outf.open(outputFile.c_str());
			if (!outf.is_open()) {
				throw (std::ios_base::failure("Failed to open the file for writing."));
			}
			for (int i = 0; i < 20; ++i) {
					drawSpaces(outf, 20 - i - 1);
					drawBranches(outf, 2 * i + 1);
					outf << std::endl;
				}

				drawSpaces(outf, 20 - 1);
				outf << "|" << std::endl;
				outf.close();
			}
		catch (const std::ios_base::failure& e)
			{std::cerr << "Caught an ios_base::failure exception: " << e.what() << std::endl;}
	}
}

void	ShrubberyCreationForm::drawSpaces(std::ofstream& outf, int count) const
{
	for (int i = 0; i < count; ++i)
	{
		outf << " ";
	}
}

void	ShrubberyCreationForm::drawBranches(std::ofstream& outf, int count) const
{
	for (int i = 0; i < count; ++i)
	{
		outf << "*";
	}
}
