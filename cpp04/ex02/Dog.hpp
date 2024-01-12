/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:25 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/08 20:34:40 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(Dog const &copy);
		Dog&	operator=(Dog const &copy);
		~Dog();

		void	makeSound()const;
		void	setBrain(Brain *newBrain);
		Brain	*getBrain(void) const;
};

#endif
