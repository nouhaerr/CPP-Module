/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:09 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/12 20:04:16 by nerrakeb         ###   ########.fr       */
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


	const int size = 2;
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

	std::string *catIdeas = new std::string[100];   // test the deep copy and shallow copy
	catIdeas[0] = "My idea '(i want to eat)'";
	std::string *luluIdeas = new std::string[100];
	luluIdeas[0] = "no idea";

	Brain catBrain;
	catBrain.setIdeas(catIdeas);
	Brain br;
	br.setIdeas(luluIdeas);

	Cat c;
	c.setBrain(&catBrain);
	Cat b;

	b = c;
	std::cout << std::string(50, '-') << std::endl;
	c.setBrain(&br);

	std::cout << std::endl;
	b.setType("Lulu Caty");
	std::cout << "Address of c: " << c.getBrain() << std::endl;
	std::cout << "Address of b: "  << b.getBrain() << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	
	std::cout << c.getType() << ": " << c.getBrain()->getIdeas()[0] << std::endl;
	std::cout << b.getType() << ": " << b.getBrain()->getIdeas()[0] << std::endl;

	std::cout << std::string(50, '-') << std::endl;
	delete [] catIdeas;
	delete [] luluIdeas;

	return 0;
}
