/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:53:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:53:14 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*materia[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		MateriaSource&	operator=(MateriaSource const &copy);
		~MateriaSource();

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};

#endif
