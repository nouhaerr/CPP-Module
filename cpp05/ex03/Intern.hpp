/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:12:40 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 23:07:51 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
	private:

    public:
		Intern(void);
		Intern(Intern const &copy);
		Intern	operator=(Intern const &copy);
		~Intern();

        AForm*	makeForm(std::string formName, std::string target);
};

// static AForm*	cloneShrubberyCreationForm(std::string target);
// static AForm*	cloneRobotomyRequestForm(std::string target);
// static AForm*	clonePresidentialPardonForm(std::string target);

#endif
