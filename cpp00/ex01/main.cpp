/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:56:06 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/11 17:32:55 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Contact.hpp"
// #include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

int main(int ac, char **av)
{
    std::string cmd;

    std::cout << "Enter a Command (ADD, SEARCH, EXIT):" << std::endl;
    std::cin >> cmd;
    if (cmd != "ADD" || cmd != "SEARCH" || cmd != "EXIT")
    {
        std::cout << "Enter a Command (ADD, SEARCH, EXIT):" << std::endl;
        std::cin >> cmd;
    }

    return (0);
}
