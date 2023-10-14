/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/14 18:37:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "\n PhoneBook Destructor executed" << std::endl;
	return ;
}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string	nickName;
	std::string	phonneNbr;
	std::string	darkestSecret;
	int			index;

	index = 0;
	std::cout<< "Enter the contact informations:" << std::endl;
	
	if (index > 8)
	{
		std::cout << "more than 8contacts";
	}
	contact[index].setFirstname(firstName);
	contact[index].setLastname(lastName);
	contact[index].setNickname(nickName);
	contact[index].setPhonenbr(phonneNbr);
	contact[index].setDarkestsecret(darkestSecret);
	index++;
}

void	PhoneBook::searchContact()
{
	std::cout << "Enter the index of the contact to search:" << std::endl;
}
