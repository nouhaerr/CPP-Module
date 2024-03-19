#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <stack>
# include <algorithm>
# include <cstdlib>
# include <iterator>

class RPN
{
	private:
		std::stack<int>	rpn;

	public:
		RPN(/* args */);
		RPN(const RPN &other);
		RPN&	operator=(const RPN &other);
		~RPN();

		void	checkExpression(const char *exp);
		void	checkNumbers(int n);
};

#endif
