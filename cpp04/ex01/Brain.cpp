#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Copy constructor for Brain is called" << std::endl;
}

Brain&	Brain::operator=(Brain const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i=0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

std::string	*Brain::getIdeas(void) const
{
	return this->ideas;
}