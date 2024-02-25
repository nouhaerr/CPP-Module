/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:38:26 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 00:18:18 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	int arr[] = { 10, 14, 80};
	std::vector<int> t(arr, arr+ sizeof(arr) / sizeof(arr[0]));
	try {
		std::vector<int>::iterator iter = easyfind<std::vector<int> >(t, 14);
		std::cout << *iter << std::endl;
		std::vector<int>::iterator it = easyfind<std::vector<int> >(t, 5);
		std::cout << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
