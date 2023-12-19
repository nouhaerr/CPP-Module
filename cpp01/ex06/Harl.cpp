#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free." << "\n";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	size_t		j;
	harlFunct	fct[4];
	std::string	comment[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	fct[0] = &Harl::debug;
	fct[1] = &Harl::info;
	fct[2] = &Harl::warning;
	fct[3] = &Harl::error;

	while (j < 4)
	{
		if (level == comment[j])
			break ;
		j++;
	}

	switch (j)
        {
			case 0:
				{
					for (int i=0; i < 4; i++)
						(this->*fct[i])();
					break ;
				}
            case 1:
				{
                	for (int i=1; i < 4; i++)
						(this->*fct[i])();
					break ;
				}
            case 2:
				{
					for (int i=2; i < 4; i++)
						(this->*fct[i])();
                	break ;
				}
            case 3:
				{
					(this->*fct[3])();
                	break ;
				}
            default:
				{
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
					break ;
				}
        }
}