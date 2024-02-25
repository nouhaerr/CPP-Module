/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:22:45 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/26 00:04:54 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <vector>
# include <iterator>
# include <algorithm>

class OccurenceNotFound : public std::exception {
	public:
		const char* what() const throw() {
			return "Aucune occurence n'a ete trouve!";
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int n) {
	typename T::iterator	it;

	it = find(container.begin(), container.end(), n);

	if (it != container.end())
		return it;
	else
		throw OccurenceNotFound();
}

#endif
