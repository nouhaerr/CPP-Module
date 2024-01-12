/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:57:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/12 23:38:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Sam"), _status(false), _gradeSigned(1), _grade(150)
{
}

Form::Form(std::string name, const int gradeSigned, const int grade) : _name(name), _gradeSigned(gradeSigned), _grade(grade)
{
	this->_status = false;
}

Form::Form(Form const &copy) {
	*this = copy;
}

Form&	Form::operator=(Form const &copy) {
	
}

Form::~Form() {}

