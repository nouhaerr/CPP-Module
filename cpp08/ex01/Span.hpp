/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:25:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 17:42:38 by nerrakeb         ###   ########.fr       */
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
# include <cstdlib>
# include <time.h>

class Span {

	private:
		unsigned int	_n;
		std::vector<int> _vectNbr;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span&	operator=(Span const &copy);
		~Span();

		void	addNumber(unsigned int nbr);
		void	addRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int		shortestSpan(void)const;
		int		longestSpan(void)const;
		void	displaySpan(void)const;

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
