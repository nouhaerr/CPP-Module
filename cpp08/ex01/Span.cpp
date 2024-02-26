/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:37:30 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 16:58:46 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n) {
//     if (n <= UINT_MAX)
		this->_n = n;
	// else
	// 	throw std::out_of_range("Nbr out of range: you shouldn't exceed the max value of unsigned int!!");
}

Span::Span(Span const &copy) {
	*this = copy;
}

Span&	Span::operator=(Span const &copy) {
	if (this != &copy) {
		this->_n = copy._n;
		this->vectNbr = copy.vectNbr;
	}
	return *this;
}

Span::~Span() {}

const char* Span::FullSpanException::what() const throw() {
	return ("The span is full, cannot add more numbers!");
}

const char* Span::CannotCalculateDistanceException::what() const throw() {
	return ("Cannot calculate distance with less than 2 numbers!");
}

void	Span::addNumber(unsigned int number) {
	if (this->vectNbr.size() < this->_n)
		this->vectNbr.push_back(number);
	else
		throw Span::FullSpanException();
}

unsigned int	Span::shortestSpan(void)const {
	if (this->vectNbr.size() < 2)
		throw Span::CannotCalculateDistanceException();
	std::vector<int> v = this->vectNbr;
	std::sort(v.begin(), v.end());
	int min_diff = v[1] - v[0];

	for(size_t i = 2; i < v.size() - 1; i++)
	{
		int d = v[d] - v[d - 1];
		if (d < min_diff)
			min_diff = d;
	}
	return min_diff;
}

unsigned int	Span::longestSpan(void)const {
	if (this->vectNbr.size() < 2)
		throw Span::CannotCalculateDistanceException();
}
