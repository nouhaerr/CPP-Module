/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:19:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/21 01:51:29 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <cstdlib>

int	main(int ac, char *av[])
{
	std::string	filename;
	std::string	str1;
	std::string	str2;

	if (ac != 4)
	{
		std::cerr << "Wrong arguments !!" << std::endl;
		return (1);
	}
	filename = av[1];
	str1 = av[2];
	str2 = av[3];
	FileReplace	replace;

	if (!replace.inputFile(filename) && !replace.outputFile(filename + ".replace")
		&& !str1.empty())
	{
		replace.replaceAndWriteToFile(str1, str2);
		std::cout << "Replacement completed. Output written to " << filename << ".replace" << std::endl;
	}
	else
		std::exit(1);
	return (0);
}
