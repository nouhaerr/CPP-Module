/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 09:52:56 by nerrakeb         ###   ########.fr       */
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
		void	mergeSort(std::vector<std::pair<int, int> >& vec, size_t left, size_t right);

    public:
        PmergeMe(void);
        PmergeMe(PmergeMe const &other);
        PmergeMe&   operator=(PmergeMe const &other);
        ~PmergeMe();

        void	checkArgs(int ac, char **av);
        void    pairwiseNbrs();
		void	sortNbrs();
		void	displaySortedNbrs()const;
};

#endif
