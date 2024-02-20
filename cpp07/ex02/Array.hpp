/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:28:38 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/20 23:36:34 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

template <typename T>
class Array {

	private:
		size_t	_size;
		T*		_arr;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &copy);
		Array<T>&	operator=(const Array<T> &copy);
		~Array();
	
		T&	operator[](size_t pos) const;
		size_t	size(void) const;

		class OutOfBoundsException : public std::exception {
			public :
				const char* what() const throw(); 
		};
};

#include "Array.tpp"

#endif
