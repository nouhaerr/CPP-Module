/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:40:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 23:53:40 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base() {}

Base *	Base::generate(void)
{
	int	i = std::rand() % 3;

	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else if (i == 2)
		return (new C());
	return NULL;
}

void	Base::identify(Base* p)
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

void	Base::identify(Base& p)
{
	try {
		if (dynamic_cast<A*>(&p))
			std::cout << "Type identified with reference: A." << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "Type identified with reference: B." << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "Type identified with reference: C." << std::endl;
	} catch (const std::bad_cast&) {
		std::cerr << "Cast failed." << std::endl;
	}
}


