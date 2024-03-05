/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:11:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/05 05:10:52 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <algorithm>
# include <vector>
# include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container > {
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		MutantStack(void) {};
		MutantStack(MutantStack const &copy) : std::stack<T, Container>(copy) {};
		MutantStack&	operator=(MutantStack const &copy) {
			if (this != &copy) {
				std::stack<T, Container>::operator=(copy);
			}
			return *this;
		};
		~MutantStack() {};

		iterator begin() {
			return this->c.begin();
		};
		iterator end() {
			return this->c.end();
		};

		reverse_iterator rbegin() {
			return this->c.rbegin();
		};
		reverse_iterator rend() {
			return this->c.rend();
		};
};

#endif
