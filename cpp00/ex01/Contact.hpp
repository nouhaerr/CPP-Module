/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/07 01:54:29 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

int	isnumber(std::string strnbr);

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string	phoneNbr;
		std::string	darkestSecret;
		static int	index;
    
	public:
		Contact(void);
		~Contact(void);
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string	getPhonenbr();
		std::string getDarkestsecret();
		static int	getIndex();
		void		setFirstname(std::string firstName);
		void		setLastname(std::string lastName);
		void		setNickname(std::string nickName);
		void		setPhonenbr(std::string phoneNbr);
		void		setDarkestsecret(std::string darkestSecret);
		static void	setIndex(int num);
		static void	incrementIndex();
};

#endif
