/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:49:44 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/14 21:22:15 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {

    private:
        Contact	contact[8];
        int		index;

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact();
        void searchContact();
};

#endif
