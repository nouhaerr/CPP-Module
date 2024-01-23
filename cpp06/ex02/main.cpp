/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:40:22 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 18:55:48 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	std::srand(static_cast<unsigned>(std::time(NULL)));
	Base* p = NULL;

	Base* base = p->generate();

	p->identify(base);
	p->identify(*base);
	delete base;
	return 0;
}

// int	main()
// {
// 	main2();
// 	system("leaks base");
// 	return 0;
// }
