/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:15 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/20 06:28:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <stack>
# include <algorithm>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <stdbool.h>
# include <iterator>

class RPN
{
	private:
		std::stack<int>	_rpn;
		typedef void	(RPN::*operationFunct)(void);
	public:
		RPN();
		RPN(const RPN &other);
		RPN&	operator=(const RPN &other);
		~RPN();

		void	checkExpression(char *exp);
		void	checkNumbers(char *exp);
		void	checkOperator(char *exp);
		void	calculate(char exp);
		void	addition();
		void	difference();
};

#endif
