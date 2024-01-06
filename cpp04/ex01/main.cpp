/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:09 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:41:10 by nerrakeb         ###   ########.fr       */
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
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << std::endl;
	// delete j;//should not create a leak
	// delete i;

	const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
	std::cout << std::string(50, '-') << std::endl;

    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }
	std::cout << std::string(50, '-') << std::endl;

    // Deleting each animal
    for (int i = 0; i < size; ++i)
	{
		delete animals[i];
    }

	return 0;
}
