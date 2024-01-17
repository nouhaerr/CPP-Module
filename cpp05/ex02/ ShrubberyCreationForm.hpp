/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:13:05 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/17 02:30:19 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

    public:
		ShrubberyCreationForm(std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm&  operator=(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();
};

#endif
