/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/22 03:20:22 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <deque>
# include <iterator>

class PmergeMe {
    private:
        std::vector<int>	v;
        std::vector<std::pair<int, int> >	vp;
        std::vector<int>	_sortedVec;
        std::deque<int>		_deck;
		std::deque<std::pair<int, int> >	_deckPairs;
		std::deque<int>		_sortedDeck;
        int stragglerVec;
        int stragglerDeck;
        bool    odd;
		void	mergeSort(std::vector<std::pair<int, int> >& vec, size_t left, size_t right);
		void	mergeSort(std::deque<std::pair<int, int> >& deq, size_t left, size_t right);
    public:
        PmergeMe(void);
        PmergeMe(PmergeMe const &other);
        PmergeMe&   operator=(PmergeMe const &other);
        ~PmergeMe();

        void	checkArgs(int ac, char **av);
        void    pairwiseNbrs();
		void	sortNbrs();
		void	displaySortedNbrs()const;

        void    _insertVectSecondPairs();
        void    _insertDeckSecondPairs();
};

#endif
