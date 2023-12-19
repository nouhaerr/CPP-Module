/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:19:02 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/19 19:19:03 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		typedef void	(Harl::*harlFunct)(void);

	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);
};

#endif
