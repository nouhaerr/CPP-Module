/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:12:38 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:29:11 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}
Intern	Intern::operator=(Intern const &copy)
{
	return *this;
}

Intern::~Intern() {}

AForm*	Intern::makeForm(std::string formName, std::string target) {
	typedef void	(AForm::*formFunct)(void);
	std::string name[3] = {
		
	};
	formFunct	fct[3];
}
