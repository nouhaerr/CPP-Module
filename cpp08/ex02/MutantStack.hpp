/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:11:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/05 01:49:29 by nerrakeb         ###   ########.fr       */
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

template <class T>
class MutantStack : public Container = std::deque<T>{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &copy);
		MutantStack&	operator=(MutantStack const &copy);
		~MutantStack();

		
};


#endif
