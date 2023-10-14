/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/14 17:38:44 by nerrakeb         ###   ########.fr       */
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
	std::cin >> firstName;
	std::cout << std::endl;
	this->firstName = firstName;
}

void    Contact::setLastname(std::string lastName)
{
	std::cout << "Last name: ";
	std::cin >> lastName;
	std::cout << std::endl;
	this->lastName = lastName;
}

void    Contact::setNickname(std::string nickName)
{
	std::cout << "Nickname: ";
	std::cin >> nickName;
	std::cout << std::endl;
	this->nickName = nickName;
}

void    Contact::setPhonenbr(std::string phoneNbr)
{
	std::cout << "Phone number: ";
	std::cin >> phoneNbr;
	std::cout << std::endl;
	this->phoneNbr = phoneNbr;
}

void    Contact::setDarkestsecret(std::string darkestSecret)
{
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
	std::cout << std::endl;
	this->darkestSecret = darkestSecret;
}
