/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:27:25 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:27:26 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

	private:
		int					_rawBits;
		static const int	fractBits;

	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
