/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:12:40 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 22:30:35 by nerrakeb         ###   ########.fr       */
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
    public:
		Intern(void);
		Intern(Intern const &copy);
		Intern	operator=(Intern const &copy);
		~Intern();

        AForm*	makeForm(const std::string formName, const std::string target);

		class NameNotFound : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
