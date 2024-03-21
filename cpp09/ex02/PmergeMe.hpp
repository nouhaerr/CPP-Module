/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:43:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/21 08:25:35 by nerrakeb         ###   ########.fr       */
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

    public:
        PmergeMe(void);
        PmergeMe(PmergeMe const &other);
        PmergeMe&   operator=(PmergeMe const &other);
        ~PmergeMe();

        void	checkArgs(int ac, char **av);
        void    pairwiseNbrs();
};

#endif
