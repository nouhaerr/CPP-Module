#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <stdexcept>
# include <map>
# include <list>
# include <algorithm>
# include <cstdlib>
# include <iterator>


class BitcoinExchange {
    private:
        std::map<std::string, double> _data;
		std::pair<std::string, double>	parseInput(std::string line);

    public:
        BitcoinExchange(void);
        BitcoinExchange(std::string filename);
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange&    operator=(BitcoinExchange const &copy);
        ~BitcoinExchange();

		void execute(const char* inputfile);
        std::string trim(const std::string& str);
};

#endif