/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:29:34 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/23 23:37:54 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed(void)
{
	this->_rawBits = 0;
}

Fixed::Fixed(int const intRawBits)
{
	this->_rawBits = intRawBits << Fixed::_fractBits;
}

Fixed::Fixed(float const floatRawBits)
{
	this->_rawBits = roundf(floatRawBits * (1 << Fixed::_fractBits));
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed() {}

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

bool	Fixed::operator>(Fixed const &a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator<(Fixed const &a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator==(Fixed const &a) const
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!=(Fixed const &a) const
{
	return !(*this == a);
}

bool	Fixed::operator>=(Fixed const &a) const
{
	return (*this > a) || (*this == a);
}

bool	Fixed::operator<=(Fixed const &a) const
{
	return (*this < a) || (*this == a);
}

Fixed	Fixed::operator+(Fixed const &obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(Fixed const &obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(Fixed const &obj)const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(Fixed const &obj)const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed&	Fixed::operator++()
{
	++this->_rawBits;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--this->_rawBits;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;

	this->_rawBits++;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;

	this->_rawBits--;
	return (old);
}

Fixed&	Fixed::min(Fixed &ob1, Fixed &ob2)
{
	if (ob1 < ob2)
		return (ob1);
	return (ob2);
}

const Fixed&	Fixed::min(Fixed const &ob1, Fixed const &ob2)
{
	if (ob1 < ob2)
		return (ob1);
	return (ob2);
}

Fixed&	Fixed::max(Fixed &ob1, Fixed &ob2)
{
	if (ob1 > ob2)
		return (ob1);
	return (ob2);
}

const Fixed&	Fixed::max(Fixed const &ob1,Fixed const &ob2)
{
	if (ob1 > ob2)
		return (ob1);
	return (ob2);
}
