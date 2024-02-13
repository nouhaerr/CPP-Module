/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:27:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/01 00:28:02 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printArr(T& a) {
	std::cout << a << std::endl;
}

int main(void)
{
	int	arr[3] = {10, 9, 5};
	::iter(arr, 3, printArr);

	std::string	str[3] = {"", "", ""};
	::iter(str, 3, printArr);

	return 0;
}