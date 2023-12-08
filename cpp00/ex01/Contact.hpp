/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/08 07:27:05 by nerrakeb         ###   ########.fr       */
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
		std::string getFirstname(void);
		std::string getLastname(void);
		std::string getNickname(void);
		std::string	getPhonenbr(void);
		std::string getDarkestsecret(void);
		static int	getIndex(void);
		void		setFirstname(std::string firstName);
		void		setLastname(std::string lastName);
		void		setNickname(std::string nickName);
		void		setPhonenbr(std::string phoneNbr);
		void		setDarkestsecret(std::string darkestSecret);
		static void	setIndex(int num);
		static void	incrementIndex();
		bool 		isValid(void) const;
};

#endif
