/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:16:19 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/08 08:05:03 by nerrakeb         ###   ########.fr       */
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
	return ;
}

void	PhoneBook::addContact(void)
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
    return (str);
}

void	PhoneBook::displayContactInfo(int foundIndex)
{
	std::cout << "First Name: " << this->contact[foundIndex].getFirstname() << std::endl;
	std::cout << "Last Name: " << this->contact[foundIndex].getLastname() << std::endl;
	std::cout << "Nickname: " << this->contact[foundIndex].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->contact[foundIndex].getPhonenbr() << std::endl;
	std::cout << "Darkest Secret: " << this->contact[foundIndex].getDarkestsecret() << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int			num;
	int			foundIndex;
	std::string	input;

	num = 0;
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First name" << "|"
				<< std::setw(10) << "Last name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	while (num < 8) //std::right
	{
		std::cout	<< std::setw(10) << num << "|"
					<< std::setw(10) << truncateString(this->contact[num].getFirstname(), 10) << "|"
					<< std::setw(10) << truncateString(this->contact[num].getLastname(), 10) << "|"
					<< std::setw(10) << truncateString(this->contact[num].getNickname(), 10) << std::endl;
		num++;
	}
	std::cout << "Enter the index of the contact to search: ";
	std::getline(std::cin, input);
	while (input.empty() || !isnumber(input) || std::stoi(input) < 0 || std::stoi(input) > 7)
	{
		std::cout << "The Contact index should be a valid number / ";
		std::cout << "and should be between 0 and 7." << std::endl << "Enter the index of the contact to search: ";
		std::getline(std::cin, input);
	}
	foundIndex = std::stoi(input);
	if (this->contact[foundIndex].isValid())
		displayContactInfo(foundIndex);
	else
	{
		std::cout << "Contact informations not found." << std::endl;
		return ;
	}
}
