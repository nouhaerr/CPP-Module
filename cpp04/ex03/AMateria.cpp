#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "Default constructor for AMateria is created" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor for AMateria is created" << std::endl;
}


