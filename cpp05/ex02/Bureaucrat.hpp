/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:51 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:00:40 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat&	operator=(Bureaucrat const &copy);
		~Bureaucrat();

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			setGrade(int grade);
		void			incrementGrade(void);
		void			decrementGrade(void);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		void			signForm(AForm &f) const;
		void			executeForm(AForm const & form);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const &bureau);

#endif
