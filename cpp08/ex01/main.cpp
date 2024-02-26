/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:59:00 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 17:01:42 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {

	try {
		Span span(5);

		span.addNumber(921);
		span.addNumber(23);
		span.addNumber(65);
		span.addNumber(81);
		span.addNumber(47);
	} catch(const std::exception& e) {
		std::cerr << e.what() <<std::endl;
	}
}
