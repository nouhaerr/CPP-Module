/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 05:20:16 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN() {}

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN&	RPN::operator=(RPN const &other) {
	if (this != &other) {
		this->_rpn = other._rpn;
	}
	return *this;
}

RPN::~RPN() {
	if (!this->_rpn.empty())
		this->_rpn.pop();
}

void	RPN::addition(void) {
	int	operand1 = this->_rpn.top();
	this->_rpn.pop();

	int sum = this->_rpn.top() + operand1;

	this->_rpn.pop();
	this->_rpn.push(sum);
}

void	RPN::difference(void) {
	int	a = this->_rpn.top();
	this->_rpn.pop();

	int	diff = this->_rpn.top() - a;

	this->_rpn.pop();
	this->_rpn.push(diff);
}

void	RPN::multiplication(void) {
	int	a = this->_rpn.top();
	this->_rpn.pop();

	int	multiple = this->_rpn.top() * a;

	this->_rpn.pop();
	this->_rpn.push(multiple);
}

void	RPN::division(void) {
	int	a = this->_rpn.top();
	if (a == 0)
		throw std::runtime_error("Error: Division by zero.");
	this->_rpn.pop();

	int	div = this->_rpn.top() / a;

	this->_rpn.pop();
	this->_rpn.push(div);
}

void	RPN::checkOperator(char *exp) {
	size_t	i = 0;
	operationFunct fct[4] = {
		&RPN::addition,
		&RPN::difference,
		&RPN::multiplication,
		&RPN::division
	};
	const char *op = "+-*/";

	while (op[i]) {
		if (*exp == op[i]) {
			if (this->_rpn.size() > 1) {
				(this->*fct[i])();
				return ;
			}
		}
		i++;
	}
}

void	RPN::showResult(void)const {
	if (this->_rpn.size() != 1)
		throw std::runtime_error("Error: Invalid");
	std::cout << this->_rpn.top() << std::endl;
}

static bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::checkExpression(char *exp) {
	size_t	i = 0, nb = 0, op = 0;

	while (exp[i]) {
		if (!(isdigit(exp[i]) || isspace(exp[i]) || isOperator(exp[i])))
			throw std::runtime_error("Error: Invalid character detected in expression.");
		else if (isOperator(exp[i])) {
			op++;
			checkOperator(exp + i);
		}
		else if (isdigit(exp[i])){
			nb++;
			if(exp[i+1] && isdigit(exp[i+1]))
				throw std::runtime_error("Error: we must have digits not numbers.");
			this->_rpn.push(exp[i] - 48);
		}
		i++;
	}
	if (nb != op + 1)
		throw std::runtime_error("Error: Invalid :(");
}

