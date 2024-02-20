/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:27:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/02/20 17:18:14 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class A {
	private:
		double	_nbr;
	public:
		A(double nbr) : _nbr(nbr) {};
		double	getNbr(void) const { return this->_nbr; };
};

std::ostream& operator<<(std::ostream& os, const A & a) {
	os << a.getNbr();
	return os;
}

template <typename T>
void	printArr(T const & a) {
	std::cout << a << " ";
	return ;
}

int main(void)
{
	int	arr[3] = {10, 9, 5};
	::iter(arr, 3, printArr);
	std::cout << std::endl;

	std::string	str[3] = {"hello", "Yo", "Jo"};
	::iter(str, 3, printArr);
	std::cout << std::endl;

	A	i[3] = {A(1337), A(42), A(100)};
	::iter(i, 3, printArr<A>);
	std::cout << std::endl;

	return 0;
}
