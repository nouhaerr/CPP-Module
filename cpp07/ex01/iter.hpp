/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:26:26 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/21 20:54:33 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(const T* array, size_t length, void (*f)(T const &)) {
	if (!array || !f)
		return ;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
