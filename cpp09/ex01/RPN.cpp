/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:43:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/20 06:38:44 by nerrakeb         ###   ########.fr       */
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

RPN::~RPN() {}

void	RPN::addition() {
	int	operand1 = this->_rpn.top();
	this->_rpn.pop();

	int sum = this->_rpn.top() + operand1;

	this->_rpn.pop();
	this->_rpn.push(sum);
}

void	RPN::difference() {
	int	a = this->_rpn.top();
	this->_rpn.pop();

	int	diff = this->_rpn.top() - a;

	this->_rpn.pop();
	this->_rpn.push(diff);
}

// static	size_t	countDigit(std::string &e) {
// 	size_t i = 0, nb = 0;

// 	while (i < e.length()) {
// 		if (isdigit(e[i]))
// 			nb++;
// 		i++;
// 	}
// 	return nb;
// }

// static size_t	count(std::string &e) {
// 	size_t i = 0, op = 0;

// 	while (i < e.length()) {
// 		if (e[i] == '+' || e[i] == '-' || e[i] == '*' || e[i] == '/')
// 			op +=1;
// 		i++;
// 	}
// 	return op;
// }

void	RPN::checkOperator(char *exp) {
	size_t	i = 0;
	operationFunct fct[4] = {
		&RPN::addition,
		&RPN::difference
	};
	const char *op = "+-*/";

	while (op[i]) {
		if (*exp == op[i]) {
			printf("inside: %c\n", op[i]);
			if (this->_rpn.size() > 1) {
				(this->*fct[i])();
				return ;
			}
		}
		i++;
		
	}
	// throw std::runtime_error("Error: Wrong RPN expression.");
}

// static bool	isNumeric(const std::string str, const std::string &seq) {
// 	return str.find_first_not_of(seq) == std::string::npos;
// }
static bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::checkNumbers(char *exp) {
	size_t	i = 0, j;

	while (exp[i]) {
		j = 0;
		if (!(isdigit(exp[i]) || isspace(exp[i]) || isOperator(exp[i])))
			throw std::runtime_error("Error: Invalid character detected in expression.");
		else if (!(isspace(exp[i]) || isdigit(exp[i])))
			checkOperator(exp + i);
		else if (isdigit(exp[i]))
			this->_rpn.push(exp[i] - 48);
		// while (exp[j] && exp[j + 1] == ' ')
		// 	j++;
		// i += j + 1;
		i++;
	}
	if (this->_rpn.size() != 1)
		throw std::runtime_error("Error: More than one digit in the stack.");
	std::cout << this->_rpn.top() << std::endl;
}
	// std::istringstream	iss(exp);
	// std::string e(exp);
	// std::stack<std::string>	st;
	// std::string	tok;

	// if (e.empty() || e.length() <= 4 || (!(isdigit(exp[0]) && isdigit(exp[2])  && !isdigit(exp[4]))))
	// 	throw std::runtime_error("Error: we must have at least: one operator and two digits.");
	// else if (!isNumeric(e, " 0123456789+-*/"))
	// 	throw std::runtime_error("Error: we must have digits or operators.");
	// else if (count(e) + 1 != countDigit(e))
	// 	throw std::runtime_error("Error: we must have operators-1 compared to digits.");

	// while (std::getline(iss, tok, ' ')) {
	// 	if (tok.length() != 1 )
	// 		throw std::runtime_error("Error: we must have numbers less than 10 (digits) or operators.");
	// 	else if (isdigit(tok[0])) {
	// 		this->_rpn.push(stoi(tok));
	// 	}
	// 	else if (tok == "-" || tok == "+" || tok == "*" || tok == "/")
	// 	{
	// 		printf("ok\n");
	// 		st.push(tok);
	// 		// if (this->_rpn.size() == 2) {
	// 		// 	printf("calcu \n");
	// 		// 	calculate(st);
	// 		// }
	// 	}
	// 	// else
	// 	// 	throw std::runtime_error("Error: we must have digits or operators.");
	// }

