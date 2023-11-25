/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/15 21:06:04 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
    std::cout << "\n Destructor executed" << std::endl;
	return ;
}

std::string Contact::getFirstname()
{
    return this->firstName;
}

std::string Contact::getLastname()
{
    return this->lastName;
}

std::string Contact::getNickname()
{
    return this->nickName;
}

std::string Contact::getPhonenbr()
{
	return this->phoneNbr;
}

std::string Contact::getDarkestsecret()
{
	return this->darkestSecret;
}

void    Contact::setFirstname(std::string firstName)
{
	std::cout << "First name: ";
	getline(std::cin, firstName);
	while (firstName.empty())
	{
		std::cout << "Please enter a valid first name: ";
		std::getline(std::cin, firstName);
	}
	this->firstName = firstName;
}

void    Contact::setLastname(std::string lastName)
{
	std::cout << "Last name: ";
	getline(std::cin, lastName);
	while (lastName.empty())
	{
		std::cout << "Please enter a valid last name: ";
		std::getline(std::cin, lastName);
	}
	this->lastName = lastName;
}

void    Contact::setNickname(std::string nickName)
{
	std::cout << "Nickname: ";
	getline(std::cin, nickName);
	while (nickName.empty())
	{
		std::cout << "Please enter a valid nickname: ";
		std::getline(std::cin, nickName);
	}
	this->nickName = nickName;
}

void    Contact::setPhonenbr(std::string phoneNbr)
{
	std::cout << "Phone number: ";
	getline(std::cin, phoneNbr);
	while (phoneNbr.empty() || !isnumber(phoneNbr))
	{
		std::cout << "Please enter a valid phone number: ";
		std::getline(std::cin, phoneNbr);
	}
	this->phoneNbr = phoneNbr;
}

void    Contact::setDarkestsecret(std::string darkestSecret)
{
	std::cout << "Darkest secret: ";
	getline(std::cin, darkestSecret);
	while (darkestSecret.empty())
	{
		std::cout << "Please enter a valid darkest secret: ";
		std::getline(std::cin, darkestSecret);
	}
	this->darkestSecret = darkestSecret;
}

int	isnumber(std::string strnbr)
{
	int	i = 0;
	int	j = 0;

	while (strnbr[i])
	{
		if (strnbr[i] >= 48 && strnbr[i] <= 57)
			j++;
		else
			return (0);
		i++;
	}
	if (j)
		return (1);
	return (0);
}
