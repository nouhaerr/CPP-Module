/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:05 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/19 21:31:47 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	private:
		std::string	_target;
		void	drawSpaces(std::ofstream& outf, int count) const;
		void	drawBranches(std::ofstream& outf, int count) const;

    public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm&  operator=(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
