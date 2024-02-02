/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:35:29 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/02 16:56:02 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

# include <iostream>
# include <string>
# include <limits>

class Helper {

	private:
		Helper();
		Helper(Helper const &copy);
		Helper&	operator=(Helper const &copy);

	public:
		~Helper();

		static bool	isdigitstring(const std::string &strnbr);

};

#endif
