/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:41:28 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:41:29 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const &copy);
		Animal&	operator=(Animal const &copy);
		virtual ~Animal();

		virtual void	makeSound()const;

		std::string		getType(void)const;
		void			setType(std::string type);
};

#endif
