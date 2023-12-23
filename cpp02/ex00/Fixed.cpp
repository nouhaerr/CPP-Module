/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:27:22 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/23 23:37:23 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(void){

    this->_rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj) {

    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
}
