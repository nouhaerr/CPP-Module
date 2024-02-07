/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:06:41 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/02 22:47:34 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data* n = new Data;

	n->nbr = 1;

	uintptr_t	p = Serializer::serialize(n);
	std::cout << p << std::endl;

	Data*	d;
	d = Serializer::deserialize(p);
	std::cout << d << ", son contenu: " << d->nbr << std::endl;
	std::cout << "Pointeur d'origine: " << n << ", son contenu: " << n->nbr <<std::endl;

	delete n;
	return 0;
}
