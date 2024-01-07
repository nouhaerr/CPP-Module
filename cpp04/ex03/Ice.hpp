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

class Ice : public AMateria{

	public:
		Ice(std::string const & type);
		Ice(Ice const &copy);
		Ice&	operator=(Ice const &copy);
        ~Ice();
        std::string const & getType() const;
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif
