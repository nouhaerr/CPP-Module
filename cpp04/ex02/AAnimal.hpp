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

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {

	protected:
		std::string	type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &copy);
		AAnimal&	operator=(AAnimal const &copy);
		virtual ~AAnimal();

		virtual void	makeSound()const = 0;

		std::string		getType(void)const;
		void			setType(std::string type);
};

#endif
