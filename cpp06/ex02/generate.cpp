#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void)
{
	std::srand(static_cast<unsigned>(time(NULL)));
	int	i = std::rand() % 3;

	switch (i) {
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default :
			return NULL;
	}
}
