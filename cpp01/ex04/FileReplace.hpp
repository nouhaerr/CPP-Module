#ifndef FILEREPLACE_HPP
# define FILEREPLACE_HPP

#include <string>
#include <fstream>
#include <iostream>

class FileReplace {

	private:
		std::ifstream	infile;
		std::ofstream	outfile;
		void	replaceString(std::string& line, const std::string& oldStr, const std::string& newStr);

	public :
		FileReplace(void);
		~FileReplace();
		int		inputFile(const std::string inputFile);
		int		outputFile(const std::string outputFile);
		void	replaceAndWriteToFile(std::string oldString, std::string newString);
};

#endif