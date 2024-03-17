#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Error: could not open file.\n", 1);
	try{
		BitcoinExchange	btc("data.csv");

		btc.execute(av[1]);
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

