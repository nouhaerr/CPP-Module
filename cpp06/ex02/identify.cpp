#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type identified by pointer: A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type identified by pointer: B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type identified by pointer: C." << std::endl;
	else
		std::cout << "Cast failed." << std::endl;
}

void	identify(Base& p)
{
	try {
		A& derivedA = dynamic_cast<A&>(p);
		(void)derivedA;
		std::cout << "Type identified by reference: A." << std::endl;
	} catch (const std::exception& e) {
		try {
			B& derivedB = dynamic_cast<B&>(p);
			(void)derivedB;
			std::cout << "Type identified by reference: B." << std::endl;
		} catch (const std::exception& e) {
			try {
				C& derivedC = dynamic_cast<C&>(p);
				(void)derivedC;
				std::cout << "Type identified by reference: C." << std::endl;
			} catch (const std::exception& e) {
				std::cerr << "Cast failed." << std::endl;
			}
		}
	}
}
