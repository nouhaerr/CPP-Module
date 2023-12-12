/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/12/12 17:41:09 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>

int	isNumber(std::string strnbr);
int	isAlpha(std::string str);
int	isEmpty(std::string str);

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
		~Contact();
		std::string getFirstname(void) const;
		std::string getLastname(void) const;
		std::string getNickname(void) const;
		std::string	getPhonenbr(void) const;
		std::string getDarkestsecret(void) const;
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
