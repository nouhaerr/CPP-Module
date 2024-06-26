/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:15 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 06:46:32 by nerrakeb         ###   ########.fr       */
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
# include <cstdbool>
# include <iterator>

class RPN
{
	private:
		std::stack<int>	_rpn;
		typedef void	(RPN::*operationFunct)(void);
		void	checkOperator(char *exp);
		void	addition(void);
		void	difference(void);
		void	multiplication(void);
		void	division(void);

	public:
		RPN();
		RPN(const RPN &other);
		RPN&	operator=(const RPN &other);
		~RPN();

		void	checkExpression(char *exp);
		void	execExpression(char *expr);
		void	showResult(void)const;
};

#endif
