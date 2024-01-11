/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:09 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/11 00:54:03 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j;
	delete i;

	std::cout << std::string(50, '-') << std::endl;


	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i){
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; ++i) {
		animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int j = 0; j < size; ++j)
		animals[j]->makeSound();
	std::cout << std::endl;

	for (int i = 0; i < size; ++i)
	{
		delete animals[i];
	}
	std::cout << std::string(50, '-') << std::endl;

	Cat c;
	Cat b(c);
	std::cout << std::endl;

	c.setType("Lulu Caty");
	std::cout << c.getBrain() << std::endl;
	std::cout << b.getBrain() << std::endl;
	std::cout << c.getType() << std::endl;
	std::cout << b.getType() << std::endl;

	std::cout << std::string(50, '-') << std::endl;

	return 0;
}
