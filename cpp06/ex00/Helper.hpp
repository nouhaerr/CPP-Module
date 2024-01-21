/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:35:29 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/21 23:45:04 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

# include <iostream>
# include <string>
# include <limits>

class Helper {

	private:

	public:
		Helper();
		Helper(Helper const &copy);
		Helper&	operator=(Helper const &copy);
		~Helper();

		static bool	isdigitstring(const std::string &strnbr);

};

#endif
