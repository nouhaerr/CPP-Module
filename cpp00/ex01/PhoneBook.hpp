/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:49:44 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/07 02:29:38 by nerrakeb         ###   ########.fr       */
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
		Contact			contact[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact();
		void searchContact();
		std::string truncateString(const std::string str, std::string::size_type maxLength);
		int		searchByIndex(int idx);
		void	displayContactInfo(int foundIndex);
};

#endif
