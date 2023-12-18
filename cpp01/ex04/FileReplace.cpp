#include "FileReplace.hpp"

FileReplace::FileReplace(void){}

FileReplace::~FileReplace(){}

int FileReplace::inputFile(const std::string inputFile)
{
    this->infile.open(inputFile.c_str());
    if (!this->infile.is_open())
    {
        std::cerr << "Error opening input file: " << inputFile << std::endl;
        return (1);
    }
    return (0);
}

int	FileReplace::outputFile(const std::string outputFile)
{
	this->outfile.open(outputFile.c_str());
	if (!this->outfile.is_open())
    {
		std::cerr << "Error opening output file: " << outputFile << ".replace" << std::endl;
		this->infile.close();
		return (1);
    }
	return (0);
}

void	FileReplace::replaceString(std::string& line, const std::string& oldStr, const std::string& newStr)
{
	size_t		pos = 0;

	pos = line.find(oldStr, pos);
	while (pos != std::string::npos)
	{
		line = line.substr(0, pos) + newStr + line.substr(pos + oldStr.length());
        pos = line.find(oldStr, pos + newStr.length());
	}
}

void	FileReplace::replaceAndWriteToFile(std::string oldString, std::string newString)
{
	std::string	line;

	while (std::getline(this->infile, line))
	{
		replaceString(line, oldString, newString);
		this->outfile << line << "\n";
	}
	this->infile.close();
	this->outfile.close();
}