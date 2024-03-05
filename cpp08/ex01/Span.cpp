/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:37:30 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/05 04:28:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n) {
	if (n > INT_MAX)
		throw std::out_of_range("Nbr out of range: you shouldn't exceed the max value of unsigned int!!");
	this->_n = n;
	vectNbr.reserve(_n);
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

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	for( ; first != last; first++)
		this->addNumber(*first);
}

int	Span::shortestSpan(void)const {
	if (this->vectNbr.size() < 2)
		throw Span::CannotCalculateDistanceException();
	std::vector<int> v = this->vectNbr;
	std::sort(v.begin(), v.end());

	int min_diff = v[1] - v[0];

	for(size_t i = 2; i < v.size() - 1; i++)
	{
		int d = v[i] - v[i - 1];
		if (d < min_diff)
			min_diff = d;
	}
	return min_diff;
}

int	Span::longestSpan(void)const {
	if (this->vectNbr.size() < 2)
		throw Span::CannotCalculateDistanceException();
	std::vector<int> v = this->vectNbr;
	int	*i1 = new int;
	int *i2 = new int;
	*i1 = *std::min_element(v.begin(), v.end());
	*i2 = *std::max_element(v.begin(), v.end());
	int max_diff = abs(*i2 - *i1);
	delete i1;
	delete i2;
	return max_diff;
}

void	Span::printVec(void)const {
	std::vector<int> v = this->vectNbr;
	std::vector<int>::iterator	it;

	std::cout << "Span=> ";
	for(it = v.begin(); it < v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
