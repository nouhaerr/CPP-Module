/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/17 01:34:33 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_status;
		const int 			_gradeRequiredToSign;
		const int			_gradeRequiredToExecute;

	public:
		Form(void);
		Form(std::string name, int  gradeRequiredToSign, int gradeRequiredToExecute);
		Form(Form const &copy);
		Form&	operator=(Form const &copy);
		~Form();

		std::string	getName(void) const;
		bool		getStatus(void) const;
		int			getGradeRequiredToSign(void) const;
		int			getGradeRequiredToExecute(void) const;
		void		beSigned(const Bureaucrat& b);
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, Form const &form);

#endif
