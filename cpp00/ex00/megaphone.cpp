/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:42:29 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/11 14:42:32 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"
#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j;
    char ch;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            while (av[i])
            {
                j = 0;
                while (av[i][j])
                {
                    ch = std::toupper(av[i][j++]);
                    std::cout << ch;
                }
                std::cout << " ";
                i++;
            }
            std::cout << std::endl;
        }
    return (0);
}
