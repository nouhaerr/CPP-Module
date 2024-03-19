#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Where is the inverted Polish mathematical expression ?",1);

	try {
		RPN	polish;
		polish.checkExpression(av[1]);
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
