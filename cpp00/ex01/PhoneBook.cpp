/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/14 18:50:48 by nerrakeb         ###   ########.fr       */
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
	// int			index;

	this->index = 0;
	std::cout<< "Enter the contact informations:" << std::endl;
	
	if (this->index > 2)
	{
		std::cout << "more than 8contacts";
	}
	contact[this->index].setFirstname(firstName);
	contact[this->index].setLastname(lastName);
	contact[this->index].setNickname(nickName);
	contact[this->index].setPhonenbr(phonneNbr);
	contact[this->index].setDarkestsecret(darkestSecret);
	this->index++;
}

void	PhoneBook::searchContact()
{
	std::cout << "Enter the index of the contact to search:" << std::endl;
}
