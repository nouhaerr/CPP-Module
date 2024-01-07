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

class Cure : public AMateria{

	public:
		Cure(std::string const & type);
		Cure(Cure const &copy);
		Cure&	operator=(Cure const &copy);
        ~Cure();
        std::string const & getType() const;
        Cure* clone() const;
        void use(ICharacter& target);
};

#endif
