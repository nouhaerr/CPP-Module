/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:27:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/21 20:53:57 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(T const & x) {
	std::cout << x << " ";
	return ;
}

int main(void)
{
	int	arr[3] = {10, 9, 5};
	::iter(arr, 3, print<const int>);
	std::cout << std::endl;

	const std::string	str[3] = {"hello", "Yo", "Jo!"};
	::iter(str, 3, print<std::string>);
	std::cout << std::endl;

	return 0;
}
