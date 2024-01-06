/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:25 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:43:26 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(Dog const &copy);
		Dog&	operator=(Dog const &copy);
		~Dog();
		void	makeSound()const;
		void	setBrain(Brain *brain);
		Brain	*getBrain(void) const;
};

#endif
