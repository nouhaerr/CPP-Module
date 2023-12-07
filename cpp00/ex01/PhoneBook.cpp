/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/07 01:48:13 by nerrakeb         ###   ########.fr       */
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

	index = Contact::getIndex();
	if (index >= 8)
	{
		std::cout << "more than 8contacts";
		Contact::setIndex(0);
		index = Contact::getIndex();
	}
	std::cout<< "Enter the contact informations:" << std::endl;
	
	this->contact[index].setFirstname(firstName);
	this->contact[index].setLastname(lastName);
	this->contact[index].setNickname(nickName);
	this->contact[index].setPhonenbr(phonneNbr);
	this->contact[index].setDarkestsecret(darkestSecret);
	
	std::cout << "Contact added successfully." << std::endl;
}

// Function to truncate a string and replace the last character with a dot if it exceeds a specified length
std::string PhoneBook::truncateString(const std::string str, std::string::size_type maxLength)
{
    if (str.length() > maxLength)
	{
        return str.substr(0, maxLength - 1) + ".";
    }
    return str;
}

void	PhoneBook::searchContact()
{
	int			num;
	int			idx;
	std::string	input;

	num = 0;
	std::cout	<< std::setw(10) << std::right << "Index" << "|"
				<< std::setw(10) << std::right << "First name" << "|"
				<< std::setw(10) << std::right << "Last name" << "|"
				<< std::setw(10) << std::right << "Nickname" << std::endl;
	while (num < 8)
	{
		std::cout	<< std::setw(10) << std::right << num << "|"
					<< std::setw(10) << std::right << truncateString(contact[num].getFirstname(), 10) << "|"
					<< std::setw(10) << std::right << truncateString(contact[num].getLastname(), 10) << "|"
					<< std::setw(10) << std::right << truncateString(contact[num].getNickname(), 10) << std::endl;
		num++;
	}
	std::cout << "Enter the index of the contact to search: ";
	std::getline(std::cin, input);
	if (isnumber(input))
	idx = std::stoi(input);
}
