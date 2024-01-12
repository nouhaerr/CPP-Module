/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/12 23:34:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_hpp
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_status;
		const int 			_gradeSigned;
		const int			_grade;

	public:
		Form(void);
		Form(std::string name, const int gradeSigned, const int grade);
		Form(Form const &copy);
		Form&	operator=(Form const &copy);
		~Form();

		std::string	getName(void) const;
		bool		getStatus(void);
		int			getGradeSigned(void) const;
		int			getGrade(void) const;
		void		beSigned(Bureaucrat &b);
};

std::ostream&	operator<<(std::ostream& os, Form const &form);

#endif
