/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:38:26 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 14:21:55 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	try {
		int arr[] = { 97, 85, 64, 37};
		std::vector<int> t(arr, arr + sizeof(arr) / sizeof(arr[0]));
		std::cout << *easyfind<std::vector<int> >(t, 64) << std::endl;

		std::list<int> li;
		li.push_back(125);
		li.push_back(14);
		li.push_back(854);
		li.push_back(377);
		li.push_back(10);
		std::cout << *easyfind<std::list<int> >(li, 14) << std::endl;

		std::vector<int>::iterator it = easyfind<std::vector<int> >(t, 5);
		std::cout << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
