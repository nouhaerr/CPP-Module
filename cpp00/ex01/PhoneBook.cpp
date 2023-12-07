/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/07 02:45:43 by nerrakeb         ###   ########.fr       */
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
		std::cout << "more than 8contacts ";
		Contact::setIndex(0);
		index = Contact::getIndex();
	}
	std::cout<< "Enter the contact informations:" << std::endl;
	
	this->contact[index].setFirstname(firstName);
	this->contact[index].setLastname(lastName);
	this->contact[index].setNickname(nickName);
	this->contact[index].setPhonenbr(phonneNbr);
	this->contact[index].setDarkestsecret(darkestSecret);
	Contact::incrementIndex();
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

int		PhoneBook::searchByIndex(int idx)
{
	if (idx >= 0 && idx <= 7)
	{
		if (this->contact[idx].isValid())
			return (idx);
	}
	return (-1);
}

void	PhoneBook::displayContactInfo(int foundIndex)
{
	std::cout << "Index:" << foundIndex << std::endl;
	std::cout << "First Name:" << this->contact[foundIndex].getFirstname() << std::endl;
	std::cout << "Last Name:" << this->contact[foundIndex].getLastname() << std::endl;
	std::cout << "Nickname:" << this->contact[foundIndex].getNickname() << std::endl;
	std::cout << "Phone Number:" << this->contact[foundIndex].getPhonenbr() << std::endl;
	std::cout << "Darkest Secret:" << this->contact[foundIndex].getDarkestsecret() << std::endl;
}

void	PhoneBook::searchContact()
{
	int			num;
	int			foundIndex;
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
					<< std::setw(10) << std::right << truncateString(this->contact[num].getFirstname(), 10) << "|"
					<< std::setw(10) << std::right << truncateString(this->contact[num].getLastname(), 10) << "|"
					<< std::setw(10) << std::right << truncateString(this->contact[num].getNickname(), 10) << std::endl;
		num++;
	}
	std::cout << "Enter the index of the contact to search: ";
	std::getline(std::cin, input);
	if (!isnumber(input) || input.empty())
	{
		std::cout << "The index should be valid and a number" << std::endl;
		return ;
	}
	idx = std::stoi(input);
	foundIndex = searchByIndex(idx);
	if (foundIndex != -1)
		displayContactInfo(foundIndex);
	else
	{
		std::cout << "Contact index not found (index should be between 0 and 7)." << std::endl;
		return ;	
	}
}
