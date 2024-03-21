/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 09:22:34 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::~PmergeMe() {}

static bool	isNumeric(const char *av, const std::string &seq) {
	std::string str(av);

	if(str.empty())
		throw std::runtime_error("Error: where is the arguments");
	return str.find_first_not_of(seq) == std::string::npos;
}

void	PmergeMe::checkArgs(int ac, char **av) {
	int	i = 1;

	while (i < ac) {
		if (!isNumeric(av[i], "0123456789"))
			throw std::runtime_error("Error: we must have just numbers and must be positive.");
		this->v.push_back(atoi(av[i]));
		i++;
	}
	std::cout << "Before: ";
	for (size_t j = 0; j < v.size(); j++)
	{
		if (j == 4 && v.size() > 5) {
			std::cout << " [...]";
			break;
		}
		std::cout << " " << v[j];
	}
	std::cout << std::endl;
}

void	PmergeMe::pairwiseNbrs() {
	size_t	i = 0;

	if (this->v.size() % 2 != 0)
		v.push_back(-1);
	while (i < this->v.size())
	{
		if (this->v[i] > this->v[i + 1])
			this->vp.push_back(std::pair<int, int>(this->v[i], this->v[i + 1]));
		else
			this->vp.push_back(std::pair<int, int>(this->v[i + 1], this->v[i]));
		i += 2;
	}
	for (size_t i = 0; i < vp.size(); ++i) { //output the pair vector
        std::cout << "Pair " << i << ": (" << vp[i].first << ", " << vp[i].second << ")\n";
    }
}
