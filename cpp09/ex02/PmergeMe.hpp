/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 23:13:04 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>
# include <algorithm>
# include <vector>
# include <deque>
# include <iterator>

class PmergeMe {
    private:
        std::vector<int>					_vec;
        std::vector<std::pair<int, int> >	_vecPairs;
        std::vector<int>					_sortedVec;

        std::deque<int>						_deck;
		std::deque<std::pair<int, int> >	_deckPairs;
		std::deque<int>						_sortedDeck;

		int		_stragglerVec;
		int		_stragglerDeck;
		bool	_vecOdd;
		bool	_deckOdd;
		
		void	_pairwiseVecNbrs();
		void	_pairwiseDeckNbrs();
		void	_mergeSort(std::vector<std::pair<int, int> >& vec, size_t left, size_t right);
		void	_mergeSort(std::deque<std::pair<int, int> >& deq, size_t left, size_t right);
		void	_sortVecNbrs();
		void	_sortDeckNbrs();
		void	_insertVecOdd();
		void	_insertDeckOdd();
		void	_displaySortedNbrs(const std::string &msg);

	public:
        PmergeMe(void);
        PmergeMe(PmergeMe const &other);
        PmergeMe&   operator=(PmergeMe const &other);
        ~PmergeMe();

        void	checkArgs(int ac, char **av);
        void    mergeSortInsertion();

};

#endif
