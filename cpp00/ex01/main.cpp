/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:56:06 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/13 14:29:33 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
    std::string	cmd;
	PhoneBook	phoneBook1;

	while (1)
	{
		std::cout << "-----Phonebook-----" << std::endl;
		getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
	if (cmd == "ADD")
			phoneBook1.addContact();
		else if (cmd == "SEARCH")
			phoneBook1.searchContact();
		else if (cmd == "EXIT")
			exit(0);
		else
		{
			std::cout << "Please enter one of these 3 commands (ADD, SEARCH, EXIT):" << std::endl;
		}
	}
    return (0);
}
