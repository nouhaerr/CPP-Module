/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:49:51 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:49:52 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter {

	private:
		std::string	name;
		AMateria	*inventory[4];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &copy);
		Character&	operator=(Character const &copy);
		~Character();

		std::string const &	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
