/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:04 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/11 17:08:14 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{
    std::cout << "\n Destructor executed" << std::endl;
}

std::string Contact::getFirstname()
{
    return firstName;
}

std::string Contact::getLastname()
{
    return lastName;
}

std::string Contact::getNickname()
{
    return nickName;
}

std::string Contact::getPhonenbr()
{
	return phoneNbr;
}

std::string Contact::getDarkestsecret()
{
	return darkestSecret;
}

void    Contact::setFirstname(std::string firstName)
{
    
}

void    Contact::setLastname(std::string lastName)
{}

void    Contact::setNickname(std::string nickName)
{}

void    Contact::setPhonenbr(std::string phoneNbr)
{}

void    Contact::setDarkestsecret(std::string darkestSecret)
{}
