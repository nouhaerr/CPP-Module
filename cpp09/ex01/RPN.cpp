/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 05:49:46 by nerrakeb         ###   ########.fr       */
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
		throw std::runtime_error("Error");
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

static bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::execExpression(char *expr) {
	int i = -1, nb = 0, op = 0;

	while (expr[++i]) {
		if (isspace(expr[i]))
			continue;
		while (expr[i] == '0' && isdigit(expr[i + 1]))
			i++;
		if (isOperator(expr[i])) {
			op++;
			checkOperator(expr + i);
		}
		else if (isdigit(expr[i])) {
			nb++;
			this->_rpn.push(expr[i] - 48);
		}
	}
	if (nb != op + 1)
		throw std::runtime_error("Error");
}

void	RPN::showResult(void)const {
	if (this->_rpn.size() != 1)
		throw std::runtime_error("Error");
	std::cout << this->_rpn.top() << std::endl;
}

void	RPN::checkExpression(char *exp) {
	size_t	i = 0;

	while (exp[i]) {
		if (!(isdigit(exp[i]) || isspace(exp[i]) || isOperator(exp[i])))
			throw std::runtime_error("Error");
		if (isdigit(exp[i]) && exp[i] != '0' && isdigit(exp[i + 1])) 
			throw std::runtime_error("Error");
		i++;
	}
}
