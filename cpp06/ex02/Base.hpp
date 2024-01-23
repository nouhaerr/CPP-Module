/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:40:15 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 17:16:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Base
{
	public:
		virtual	~Base();
		Base *	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);
};

#endif
