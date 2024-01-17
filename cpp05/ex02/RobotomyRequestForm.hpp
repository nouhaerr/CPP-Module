/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/17 02:30:09 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm(std::string& target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm&  operator=(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();
};

#endif
