/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:35:22 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/22 19:13:49 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

bool	Helper::isdigitstring(const std::string &strnbr)
{
	int		j = 0;
	size_t	i = 0;

	if (strnbr[j] == '-')
		j++;
	for (i = j ; i < strnbr.length(); i++)
	{
		if (strnbr[i] >= 48 && strnbr[i] <= 57)
			j++;
		else
			return (0);
	}
	if (j)
		return (1);
	return (0);
}

// bool	Helper::isPrintable(std::string str)
// {
// 	int		j = 0;

// 	for (size_t i = 0; i < str.length(); i++)
// 	{
// 		if (str[i] >= 32 && str[i] <= 127)
// 			j++;
// 		else
// 			return (0);
// 	}
// 	if (j)
// 		return (1);
// 	return 0;
// }
