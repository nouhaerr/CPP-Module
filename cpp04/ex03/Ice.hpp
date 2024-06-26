/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:50:34 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:50:35 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria{

	public:
		Ice(void);
		Ice(Ice const &copy);
		Ice&	operator=(Ice const &copy);
		~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
