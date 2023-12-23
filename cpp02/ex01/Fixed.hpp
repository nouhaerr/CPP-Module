/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:28:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/23 23:37:45 by nerrakeb         ###   ########.fr       */
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
		Fixed& operator=(Fixed const &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void ) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &obj);

#endif
