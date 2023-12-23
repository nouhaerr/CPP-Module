/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:28:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/23 23:37:43 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(int const intRawBits)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = intRawBits << Fixed::_fractBits;
}

Fixed::Fixed(float const floatRawBits)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(floatRawBits * (1 << Fixed::_fractBits));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = obj.getRawBits();

	return *this;
}

float	Fixed::toFloat( void ) const
{
	float	fNbr;

	fNbr = ((float)this->_rawBits / (1 << Fixed::_fractBits));
	return (fNbr);
}

int	Fixed::toInt(void) const
{
	return this->_rawBits >> Fixed::_fractBits;
}

std::ostream&	operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return os;
}
