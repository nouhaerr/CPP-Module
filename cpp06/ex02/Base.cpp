/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:40:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/09 23:53:44 by nerrakeb         ###   ########.fr       */
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
	} catch (const std::bad_cast&) {
		try {
			B& derivedB = dynamic_cast<B&>(p);
			(void)derivedB;
			std::cout << "Type identified by reference: B." << std::endl;
		} catch (const std::bad_cast&) {
			try {
				C& derivedC = dynamic_cast<C&>(p);
				(void)derivedC;
				std::cout << "Type identified by reference: C." << std::endl;
			} catch (const std::bad_cast&) {
				std::cerr << "Cast failed." << std::endl;
			}
		}
	}
}
