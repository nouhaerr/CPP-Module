/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:59:00 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/05 04:29:13 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {

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
		Span span(5);

		span.addNumber(921);
		span.addNumber(23);
		span.addNumber(65);
		span.addNumber(-5);
		span.addNumber(-12);
		span.displaySpan();

		std::cout << "Shortest distance: " << span.shortestSpan() << std::endl;
		std::cout << "longest distance: " << span.longestSpan() << std::endl;
		span.addNumber(56);
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}

	std::cout << std::string(55, '-') << std::endl;

	try {
		std::srand(static_cast<unsigned int>(time(NULL)));
		std::vector<int> v;
		for(int i = 0; i < 4; i++) {
			int random = (std::rand() % 500) + 1;
			v.push_back(random);
		}
		for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
			std::cout << *i << " ";
		
		std::cout << std::endl;
		Span sp1(4);

		sp1.addNumber(v.begin(), v.end());
		sp1.displaySpan();

		std::cout << "Shortest distance: " << sp1.shortestSpan() << std::endl;
		std::cout << "longest distance: " << sp1.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}
}
