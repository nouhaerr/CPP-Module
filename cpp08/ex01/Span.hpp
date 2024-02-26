/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:25:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 17:02:14 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <vector>
# include <list>
# include <iterator>
# include <algorithm>
# include <limits.h>

class Span {

	private:
		unsigned int	_n;
		std::vector<int> vectNbr;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span&	operator=(Span const &copy);
		~Span();

		void			addNumber(unsigned int nbr);
		unsigned int	shortestSpan(void)const;
		unsigned int	longestSpan(void)const;
		void			printVec(void)const;

		class FullSpanException : public std::exception {
			public:
				const char* what() const throw();
		};

		class CannotCalculateDistanceException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
