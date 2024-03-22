/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 10:52:02 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _vecOdd(false), _deckOdd(false) {}

PmergeMe::PmergeMe(PmergeMe const &other) {
	*this = other;
}

PmergeMe&	PmergeMe::operator=(PmergeMe const &other) {
	if (this != &other) {
		this->_vec = other._vec;
		this->_vecPairs = other._vecPairs;
		this->_sortedVec = other._sortedVec;
		this->_deck = other._deck;
		this->_deckPairs = other._deckPairs;
		this->_sortedDeck = other._sortedDeck;
		this->_vecOdd = other._vecOdd;
		this->_deckOdd = other._deckOdd;
		this->_stragglerVec = other._stragglerVec;
		this->_stragglerDeck = other._stragglerDeck;
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
		this->_vec.push_back(atoi(av[i]));
		this->_deck.push_back(atoi(av[i]));
		i++;
	}
}

void	PmergeMe::_displaySortedNbrs(const std::string &msg) {
	if (msg == "BEFORE") {
		std::cout << "Before: ";
		for (size_t j = 0; j < this->_deck.size(); j++) {
			// if (j == 4 && this->_deck.size() > 5) {
			// 	std::cout << " [...]";
			// 	break;
			// }
			std::cout << " " << this->_deck[j];
		}
		std::cout << std::endl;
	}
	else if (msg == "AFTER") {
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
}

void	PmergeMe::mergeSortInsertion(){
	_displaySortedNbrs("BEFORE");
	clock_t	vecStart = clock();
	_pairwiseVecNbrs();
	_sortVecNbrs();
	clock_t	vecEnd = clock();

	clock_t	deckStart = clock();
	_pairwiseDeckNbrs();
	_sortDeckNbrs();
	clock_t	deckEnd = clock();
	_displaySortedNbrs("AFTER");
	double	vecDuration = ((double) (vecEnd - vecStart) / CLOCKS_PER_SEC) * 1000000;
	double	deckDuration = ((double) (deckEnd - deckStart) / CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << this->_sortedVec.size() << " elements with std::vector : "
	<< vecDuration << " µs" << "\n";
	std::cout << "Time to process a range of " << this->_sortedDeck.size() << " elements with std::deque : "
	<< deckDuration << " µs" << "\n";
}

void	PmergeMe::_pairwiseVecNbrs(){
	size_t	i = 0;

	if (this->_vec.size() % 2 != 0) {
		if (this->_vec.size() == 1)
			return ;
		this->_stragglerVec = this->_vec.back();
		this->_vec.pop_back();
		this->_vecOdd = true;
	}
	while (i < this->_vec.size()) {
		if (this->_vec[i] > this->_vec[i + 1])
			this->_vecPairs.push_back(std::make_pair(this->_vec[i], this->_vec[i + 1]));
		else
			this->_vecPairs.push_back(std::make_pair(this->_vec[i + 1], this->_vec[i]));
		i += 2;
	}
}

void	PmergeMe::_pairwiseDeckNbrs(){
	size_t	i = 0;

	if (this->_deck.size() % 2 != 0) {
		if (this->_deck.size() == 1)
			return ;
		this->_stragglerDeck = this->_deck.back();
		this->_deck.pop_back();
		this->_deckOdd = true;
	}
	while (i < this->_deck.size()) {
		if (this->_deck[i] > this->_deck[i + 1])
			this->_deckPairs.push_back(std::make_pair(this->_deck[i], this->_deck[i + 1]));
		else
			this->_deckPairs.push_back(std::make_pair(this->_deck[i + 1], this->_deck[i]));
		i += 2;
	}
}

void	PmergeMe::_sortVecNbrs() {
	size_t size = this->_vecPairs.size(), i = -1;

	if (this->_vec.size() == 1) {
		this->_sortedVec.push_back(this->_vec.back());
		return ;
	}
	mergeSort(this->_vecPairs, 0, size - 1);
	while (++i < size)
		this->_sortedVec.push_back(this->_vecPairs[i].first);
	for (size_t i = 0; i < this->_vecPairs.size(); i++) {
			std::vector<int>::iterator	it = std::lower_bound(this->_sortedVec.begin(),\
			this->_sortedVec.end(), this->_vecPairs[i].second);
			this->_sortedVec.insert(it, this->_vecPairs[i].second);
	}
	_insertVecOdd();
}

void	PmergeMe::_insertVecOdd() {
	if (this->_vecOdd) {
		std::vector<int>::iterator	it = std::lower_bound(this->_sortedVec.begin(),\
		this->_sortedVec.end(), this->_stragglerVec);
		this->_sortedVec.insert(it, this->_stragglerVec);
	}
}

void	PmergeMe::_sortDeckNbrs() {
	size_t size = this->_deckPairs.size(), i = -1;
	
	if (this->_deck.size() == 1) {
		this->_sortedDeck.push_back(this->_deck.back());
		return ;
	}
	mergeSort(this->_deckPairs, 0, size - 1);
	while (++i < size)
		this->_sortedDeck.push_back(this->_deckPairs[i].first);
	for (size_t i = 0; i < this->_deckPairs.size(); i++) {
		std::deque<int>::iterator	it = std::lower_bound(this->_sortedDeck.begin(),\
		this->_sortedDeck.end(), this->_deckPairs[i].second);
		this->_sortedDeck.insert(it, this->_deckPairs[i].second);
	}
	_insertDeckOdd();
}

void	PmergeMe::_insertDeckOdd() {
	if (this->_deckOdd) {
		std::deque<int>::iterator	it = std::lower_bound(this->_sortedDeck.begin(),\
		this->_sortedDeck.end(), this->_stragglerDeck);
		this->_sortedDeck.insert(it, this->_stragglerDeck);
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
