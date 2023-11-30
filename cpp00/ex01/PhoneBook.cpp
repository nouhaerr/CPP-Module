/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/11/29 07:12:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->index = 0;
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
	if (this->index >= 8)
	{
		std::cout << "more than 8contacts";
		while (index <= 7)
		{
			this->contact[index %] = this->contact[index + 1];
			this->index -= 1;
		}
		return ;
	}
	std::cout<< "Enter the contact informations:" << std::endl;
	
	this->contact[index].setFirstname(firstName);
	this->contact[index].setLastname(lastName);
	this->contact[index].setNickname(nickName);
	this->contact[index].setPhonenbr(phonneNbr);
	this->contact[index].setDarkestsecret(darkestSecret);
	this->index += 1;
	std::cout << "Contact added successfully." << std::endl;
}

void	PhoneBook::searchContact()
{
	std::cout << "Enter the index of the contact to search:" << std::endl;
}
