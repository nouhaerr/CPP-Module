/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:40:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/07 22:25:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base() {}

Base *	generate(void)
{
	std::srand(static_cast<unsigned>(std::time(NULL)));
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

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type identified: A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type identified: B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type identified: C." << std::endl;
	else
		std::cout << "Cast failed." << std::endl;
}

void	identify(Base& p)
{
	try {
		A& derivedA = dynamic_cast<A&>(p);
		(void)derivedA;
		std::cout << "Type identified with reference: A." << std::endl;
		return ;
	} catch (const std::exception&) {}
	try {
		B& derivedB = dynamic_cast<B&>(p);
		(void)derivedB;
		std::cout << "Type identified with reference: B." << std::endl;
		return ;
	} catch (const std::exception&) {}
	try {
		C& derivedC = dynamic_cast<C&>(p);
		(void)derivedC;
		std::cout << "Type identified with reference: C." << std::endl;
		return ;
		} catch (const std::exception&) {
			std::cerr << "Cast failed." << std::endl;
		}
}
