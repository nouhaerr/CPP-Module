/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:42:29 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/13 12:13:45 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    char ch;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            while (av[++i])
            {
                j = 0;
                while (av[i][j])
                {
                    ch = std::toupper(av[i][j++]);
                    std::cout << ch;
                }
                std::cout << " ";
            }
            std::cout << std::endl;
        }
    return (0);
}
