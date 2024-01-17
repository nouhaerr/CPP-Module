/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/17 02:20:09 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_status;
		const int 			_gradeRequiredToSign;
		const int			_gradeRequiredToExecute;

	public:
		AForm(void);
		AForm(std::string name, int  gradeRequiredToSign, int gradeRequiredToExecute);
		AForm(AForm const &copy);
		AForm&	operator=(AForm const &copy);
		~AForm();

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
