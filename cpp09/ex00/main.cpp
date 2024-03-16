#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Error: could not open file." << std::endl;
	try{
		BitcoinExchange	btc("data.csv");

		btc.execute(av[1]);
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
