/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:27:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/25 17:01:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{	
	int	arr[3] = {10, 9, 5};
	::iter(arr, 3, print<const int>);
	std::cout << std::endl;
	arr[1] = 708;
	::iter(arr, 3, print<int>);
	std::cout << std::endl;

	const std::string	str[3] = {"hello", "Yo", "Jo!"};
	::iter(str, 3, print<const std::string>);
	std::cout << std::endl;

	return 0;
}
