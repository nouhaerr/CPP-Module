/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:42:29 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/09 00:28:39 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    size_t j;
    std::string str;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            while (i < ac)
            {
                str = av[i];
                j = 0;
                while (j < str.lenght())
                {
                    str[j] = std::toupper(str[j]);
                    j++;
                }
                std::cout << str;
            }
            std::cout << std::endl;
        }
    return (0);
}
