/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/10 04:23:17 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::index = 0;

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getFirstname(void)
{
    return this->firstName;
}

std::string Contact::getLastname(void)
{
    return this->lastName;
}

std::string Contact::getNickname(void)
{
    return this->nickName;
}

std::string Contact::getPhonenbr(void)
{
	return this->phoneNbr;
}

std::string Contact::getDarkestsecret(void)
{
	return this->darkestSecret;
}

int	Contact::getIndex(void)
{
	return (index);
}

void    Contact::setFirstname(std::string firstName)
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	while (isEmpty(firstName) || isNumber(firstName))
	{
		std::cout << "Please enter a valid first name: ";
		std::getline(std::cin, firstName);
	}
	this->firstName = firstName;
}

void    Contact::setLastname(std::string lastName)
{
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	while (isEmpty(lastName) || isNumber(lastName))
	{
		std::cout << "Please enter a valid last name: ";
		std::getline(std::cin, lastName);
	}
	this->lastName = lastName;
}

void    Contact::setNickname(std::string nickName)
{
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	while (isEmpty(nickName) || isNumber(nickName))
	{
		std::cout << "Please enter a valid nickname: ";
		std::getline(std::cin, nickName);
	}
	this->nickName = nickName;
}

void    Contact::setPhonenbr(std::string phoneNbr)
{
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNbr);
	while (isEmpty(phoneNbr)|| !isNumber(phoneNbr))
	{
		std::cout << "Please enter a valid phone Number: ";
		std::getline(std::cin, phoneNbr);
	}
	this->phoneNbr = phoneNbr;
}

void    Contact::setDarkestsecret(std::string darkestSecret)
{
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
	while (isEmpty(darkestSecret) || isNumber(darkestSecret))
	{
		std::cout << "Please enter a valid darkest secret: ";
		std::getline(std::cin, darkestSecret);
	}
	this->darkestSecret = darkestSecret;
}

void	Contact::setIndex(int num)
{
	index = num;
}

void	Contact::incrementIndex()
{
	index += 1;
}

bool Contact::isValid(void) const
{
	return !firstName.empty() && !lastName.empty() && !nickName.empty() && !phoneNbr.empty() && !darkestSecret.empty();
}

int	isNumber(std::string strnbr)
{
	int	i = 0;
	int	j = 0;

	if (strnbr[i] == '+')
		i++;
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

int	isEmpty(std::string str)
{
	if (std::cin.eof())
        std::exit(0);
	if (str.empty())
		return (1);
	return (0);
}
