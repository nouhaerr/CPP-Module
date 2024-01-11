/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:48:01 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 01:59:27 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
# include <cstdlib>

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::string(45, '-') << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::string(45, '-') << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::string(45, '-') << std::endl;

	ICharacter* me = new Character("me");
	std::cout << std::string(45, '-') << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::string(45, '-') << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	delete bob;
	std::cout << std::string(45, '-') << std::endl;
	delete me;
	std::cout << std::string(45, '-') << std::endl;
	delete src;

	return 0;
}
