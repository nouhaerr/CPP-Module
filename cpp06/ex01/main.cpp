/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:06:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/22 23:37:25 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data* n = new Data;

	n->data = 1;

	uintptr_t	p = Serializer::serialize(n);
	std::cout << p << std::endl;

	Data*	d;
	d = Serializer::deserialize(p);
	std::cout << d << ", son contenu: " << d->data << std::endl;
	std::cout << "Pointeur d'origine: " << n << ", son contenu: " << n->data <<std::endl;

	delete n;
	return 0;
}
