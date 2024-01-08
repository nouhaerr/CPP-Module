#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->type = "";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria&	AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return *this;
}

AMateria::~AMateria()
{}

std::string const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
