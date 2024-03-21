/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 10:01:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &other) {
	*this = other;
}

PmergeMe&	PmergeMe::operator=(PmergeMe const &other) {
	if (this != &other) {
		this->v = other.v;
		this->vp = other.vp;
	}
	return *this;
}

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
	for (size_t j = 0; j < this->v.size(); j++)
	{
		if (j == 4 && this->v.size() > 5) {
			std::cout << " [...]";
			break;
		}
		std::cout << " " << this->v[j];
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
		std::cout << "Pair Before" << ": (" << vp[i].first << ", " << vp[i].second << ")\n";
	}
}

void	PmergeMe::sortNbrs() {
	size_t size = this->vp.size(), i = 0;

	mergeSort(this->vp, 0, size - 1);
	for (size_t i = 0; i < vp.size(); ++i) { //output the pair vector
        std::cout << "Pair After" << ": (" << vp[i].first << ", " << vp[i].second << ")\n";
    }
	while (i < size) {
		this->_sortedVec.push_back(vp[i].first);
		i++;
	}
	std::cout << "After: ";
	for (size_t i = 0; i < _sortedVec.size(); ++i) { //output the pair vector
		std::cout << " " << _sortedVec[i];
	}
	std::cout << std::endl;
}

static void	merge(std::vector<std::pair<int, int> >& vec, size_t left, size_t mid, size_t right) {
	size_t n1 = mid - left + 1;
    size_t n2 = right - mid;

    // Create temporary vectors to store the left and right halves
    std::vector<std::pair<int, int> > leftHalf(vec.begin() + left, vec.begin() + mid + 1);
    std::vector<std::pair<int, int> > rightHalf(vec.begin() + mid + 1, vec.begin() + right + 1);

    size_t i = 0, j = 0, k = left;

    // Merge the left and right halves back into the original vector
    while (i < n1 && j < n2) {
        if (leftHalf[i].first <= rightHalf[j].first) {
            vec[k++] = leftHalf[i++];
        } else {
            vec[k++] = rightHalf[j++];
        }
    }

    // Copy the remaining elements of leftHalf[], if any
    while (i < n1) {
        vec[k++] = leftHalf[i++];
    }

    // Copy the remaining elements of rightHalf[], if any
    while (j < n2) {
        vec[k++] = rightHalf[j++];
    }
}

void	PmergeMe::mergeSort(std::vector<std::pair<int, int> >& vec, size_t left, size_t right) {
	if (left < right) {
		size_t	mid = left + (right - left) / 2;

		mergeSort(vec, left, mid);
		mergeSort(vec, mid + 1, right);

		merge(vec, left, mid, right);
	}
}

void	PmergeMe::displaySortedNbrs()const {
	// std::cout << "After:  ";
	// for (size_t j = 0; j < this->vp.size(); j++)
	// {
	// 	if (j == 4 && this->v.size() > 5) {
	// 		std::cout << " [...]";
	// 		break;
	// 	}
	// 	std::cout << " " << this->v[j];
	// }
	// std::cout << std::endl;
}

