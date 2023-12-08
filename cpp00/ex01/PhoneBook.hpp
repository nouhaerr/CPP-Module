/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:49:44 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/08 07:27:29 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook {

	private:
		Contact	contact[8];
		void	displayContactInfo(int foundIndex);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void searchContact(void);
		std::string truncateString(const std::string str, std::string::size_type maxLength);
};

#endif
