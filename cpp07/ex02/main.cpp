/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:29:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/20 23:35:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<std::string> strArray(3);
	strArray[0] = "hello";
	strArray[1] = "middle";
	strArray[2] = "east";
	std::cout << strArray << std::endl;

	Array<std::string> copy = strArray;
	copy[1] = "other";
	std::cout << copy << std::endl;
	std::cout << strArray << std::endl;

	Array<std::string> obj(strArray);

	// An array of integers
	Array<int> intArray(5);
	size_t position = 0;
	try {
		while(true) {
			intArray[position] = position * 10;
			position++;
        }
    } catch( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }

	std::cout << intArray << std::endl;


	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
    //SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;

	return 0;
}
