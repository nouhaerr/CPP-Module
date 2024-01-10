/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:48:40 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:48:41 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		AMateria&	operator=(AMateria const &copy);
        virtual ~AMateria();

        std::string const &	getType() const; //Returns the materia type
        virtual AMateria*	clone() const = 0;
        virtual void		use(ICharacter& target);
};

#endif
