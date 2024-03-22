/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 03:33:30 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : odd(false) {}

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
			throw std::runtime_error("Error");
		this->v.push_back(atoi(av[i]));
		this->_deck.push_back(atoi(av[i]));
		i++;
	}
	std::cout << "Before: ";
	for (size_t j = 0; j < this->_deck.size(); j++) {
		// if (j == 4 && this->_deck.size() > 5) {
		// 	std::cout << " [...]";
		// 	break;
		// }
		std::cout << " " << this->_deck[j];
	}
}

void	PmergeMe::pairwiseNbrs() {
	size_t	i = 0;

	if (this->v.size() % 2 != 0) {
		this->stragglerVec = this->v.back();
		this->v.pop_back();
		this->stragglerDeck = this->_deck.back();
		this->_deck.pop_back();
		this->odd = true;
	}
	while (i < this->v.size()) {
		if (this->v[i] > this->v[i + 1]) {
			this->vp.push_back(std::make_pair(this->v[i], this->v[i + 1]));
			this->_deckPairs.push_back(std::make_pair(this->v[i], this->v[i + 1]));
		}
		else {
			this->vp.push_back(std::make_pair(this->v[i + 1], this->v[i]));
			this->_deckPairs.push_back(std::make_pair(this->v[i + 1], this->v[i]));
		}
		i += 2;
	}
}

void	PmergeMe::sortNbrs() {
	size_t size = this->vp.size(), i = -1;

	mergeSort(this->vp, 0, size - 1);
	mergeSort(this->_deckPairs, 0, size - 1);
	while (++i < size) {
		this->_sortedVec.push_back(this->vp[i].first);
		this->_sortedDeck.push_back(this->_deckPairs[i].first);
	}
	_insertVectSecondPairs();
	_insertDeckSecondPairs();
}

void	PmergeMe::_insertVectSecondPairs() {
	for (size_t i = 0; i < this->vp.size(); i++) {
			std::vector<int>::iterator	it = std::lower_bound(this->_sortedVec.begin(),\
			this->_sortedVec.end(), this->vp[i].second);
			this->_sortedVec.insert(it, this->vp[i].second);
	}
	if (this->odd) {
			std::vector<int>::iterator	it = std::lower_bound(this->_sortedVec.begin(),\
			this->_sortedVec.end(), this->stragglerVec);
			this->_sortedVec.insert(it, this->stragglerVec);
	}
		
}

void	PmergeMe::_insertDeckSecondPairs() {
	for (size_t i = 0; i < this->_deckPairs.size(); i++) {
		std::deque<int>::iterator	it = std::lower_bound(this->_sortedDeck.begin(),\
		this->_sortedDeck.end(), this->_deckPairs[i].second);
		this->_sortedDeck.insert(it, this->_deckPairs[i].second);
	}
	if (this->odd) {
		std::deque<int>::iterator	it = std::lower_bound(this->_sortedDeck.begin(),\
		this->_sortedDeck.end(), this->stragglerDeck);
		this->_sortedDeck.insert(it, this->stragglerDeck);
	}
}

static void	merge(std::vector<std::pair<int, int> >& vec, size_t left, size_t mid, size_t right) {
	size_t n1 = mid - left + 1;
    size_t n2 = right - mid;

    std::vector<std::pair<int, int> > leftHalf(vec.begin() + left, vec.begin() + mid + 1);
    std::vector<std::pair<int, int> > rightHalf(vec.begin() + mid + 1, vec.begin() + right + 1);

    size_t i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftHalf[i].first <= rightHalf[j].first)
            vec[k++] = leftHalf[i++];
		else
            vec[k++] = rightHalf[j++];
    }
    while (i < n1)
        vec[k++] = leftHalf[i++];
    while (j < n2)
        vec[k++] = rightHalf[j++];
}

void	PmergeMe::mergeSort(std::vector<std::pair<int, int> >& vec, size_t left, size_t right) {
	if (left < right) {
		size_t	mid = left + (right - left) / 2;

		mergeSort(vec, left, mid);
		mergeSort(vec, mid + 1, right);

		merge(vec, left, mid, right);
	}
}

static void	merge(std::deque<std::pair<int, int> >& deq, size_t left, size_t mid, size_t right) {
	size_t n1 = mid - left + 1;
    size_t n2 = right - mid;

    // Create temporary vectors to store the left and right halves
    std::deque<std::pair<int, int> > leftHalf(deq.begin() + left, deq.begin() + mid + 1);
    std::deque<std::pair<int, int> > rightHalf(deq.begin() + mid + 1, deq.begin() + right + 1);

    size_t i = 0, j = 0, k = left;

    // Merge the left and right halves back into the original vector
    while (i < n1 && j < n2) {
        if (leftHalf[i].first <= rightHalf[j].first)
			deq[k++] = leftHalf[i++];
		else
            deq[k++] = rightHalf[j++];
    }

    // Copy the remaining elements of leftHalf[], if any
    while (i < n1)
        deq[k++] = leftHalf[i++];

    // Copy the remaining elements of rightHalf[], if any
    while (j < n2)
        deq[k++] = rightHalf[j++];
}

void	PmergeMe::mergeSort(std::deque<std::pair<int, int> >& deq, size_t left, size_t right) {
	if (left < right) {
		size_t	mid = left + (right - left) / 2;

		mergeSort(deq, left, mid);
		mergeSort(deq, mid + 1, right);

		merge(deq, left, mid, right);
	}
}

void	PmergeMe::displaySortedNbrs()const {
	// std::cout << "Before: ";
	// for (size_t j = 0; j < this->v.size(); j++) {
	// 	if (j == 4 && this->v.size() > 5) {
	// 		std::cout << " [...]";
	// 		break;
	// 	}
	// 	std::cout << " " << this->v[j];
	// }
	std::cout << std::endl;
	std::cout << "After:  ";
	for (size_t j = 0; j < this->_sortedDeck.size(); j++)
	{
		// if (j == 4 && this->_sortedDeck.size() > 5) {
		// 	std::cout << " [...]";
		// 	break;
		// }
		std::cout << " " << this->_sortedDeck[j];
	}
	std::cout << std::endl;
}

