/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 07:45:46 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/30 07:45:47 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(Brain const &copy);
		Brain&	operator=(Brain const &copy);
		~Brain();

		void				setIdeas(std::string *ideas);
		const std::string	*getIdeas(void) const;
};

#endif
