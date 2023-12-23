/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:29:27 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:29:28 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int					_rawBits;
		static const int	_fractBits;

	public:
		Fixed(void);
		Fixed(int const intRawBits);
		Fixed(float const floatRawBits);
		Fixed(Fixed const &src);
		~Fixed();
		Fixed&	operator=(Fixed const &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void ) const;
		int		toInt(void) const;
		bool	operator>(Fixed const &a) const;
		bool	operator<(Fixed const &a) const;
		bool	operator==(Fixed const &a) const;
		bool	operator!=(Fixed const &a) const;
		bool	operator>=(Fixed const &a) const;
		bool	operator<=(Fixed const &a) const;
		Fixed	operator+(Fixed const &obj) const;
		Fixed	operator-(Fixed const &obj) const;
		Fixed	operator*(Fixed const &obj)const;
		Fixed	operator/(Fixed const &obj)const;
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed&		min(Fixed &ob1, Fixed &ob2);
		static const Fixed&	min(Fixed const &ob1, Fixed const &ob2);
		static Fixed&		max(Fixed &ob1, Fixed &ob2);
		static const Fixed&	max(Fixed const &ob1,Fixed const &ob2);
};

std::ostream&	operator<<(std::ostream &os, Fixed const &obj);

#endif
