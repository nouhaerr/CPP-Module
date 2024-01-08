/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:50:53 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:50:54 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria{

	public:
		Cure(void);
		Cure(Cure const &copy);
		Cure&	operator=(Cure const &copy);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
