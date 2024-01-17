/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:59 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/17 02:30:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm(std::string& target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm&  operator=(PresidentialPardonForm const &copy);
		~PresidentialPardonForm();
};

#endif
