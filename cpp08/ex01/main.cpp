/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:59:00 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/18 01:20:19 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {

	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::string(55, '-') << std::endl;

	try {
		Span sp(1);

		sp.addNumber(77);
		sp.displaySpan();
		std::cout << sp.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::string(55, '-') << std::endl;

	try {
		Span span(4);

		span.addNumber(921);
		span.addNumber(23);
		span.addNumber(65);
		span.addNumber(-5);
		span.displaySpan();

		std::cout << "Shortest distance: " << span.shortestSpan() << std::endl;
		std::cout << "longest distance: " << span.longestSpan() << std::endl;
		span.addNumber(-12);
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::string(55, '-') << std::endl;

	try {
		std::srand(static_cast<unsigned int>(time(NULL)));
		std::vector<int> v;
		for(int i = 0; i < 6; i++) {
			int random = (std::rand() % 500) + 1;
			v.push_back(random);
		}
		for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
			std::cout << *i << " ";
		
		std::cout << std::endl;
		Span sp1(6);

		sp1.addRange(v.begin(), v.end());
		sp1.displaySpan();

		std::cout << "Shortest distance: " << sp1.shortestSpan() << std::endl;
		std::cout << "longest distance: " << sp1.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}

	return 0;
}
