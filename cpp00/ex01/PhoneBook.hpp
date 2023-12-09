/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:49:44 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/09 00:36:16 by nerrakeb         ###   ########.fr       */
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
		std::string truncateString(const std::string str, std::string::size_type maxLength);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void searchContact(void);

};

#endif
