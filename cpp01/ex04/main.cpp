#include "FileReplace.hpp"

int	main(int ac, char *av[])
{
	std::string	filename;
	std::string	str1;
	std::string	str2;

	if (ac != 4)
	{
		std::cerr << "Wrong arguments !!" << std::endl;
		return (1);
	}
	filename = av[1];
	str1 = av[2];
	str2 = av[3];
	FileReplace	replace;

	if (!replace.inputFile(filename) && !replace.outputFile(filename + ".replace")
		&& !str1.empty())
	{
		replace.replaceAndWriteToFile(str1, str2);
		std::cout << "Replacement completed. Output written to " << filename << ".replace" << std::endl;
	}
	return (0);
}
