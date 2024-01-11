/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:43:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/10 22:57:14 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(Cat const &copy);
		Cat&	operator=(Cat const &copy);
		~Cat();

		void	makeSound()const;
		void	setBrain(Brain *brain);
		Brain	*getBrain(void) const;
};

#endif
