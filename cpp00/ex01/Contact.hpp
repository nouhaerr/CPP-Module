/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/10/11 15:10:55 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        int			phoneNbr;
		std::string	darkestSecret;
    
	public:
		Contact();
		~Contact();
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getPhonenbr();
		std::string getDarkestsecret();
		void		setFirstname(std::string firstName);
		void		setLastname(std::string lastName);
		void		setNickname(std::string nickName);
		void		setPhonenbr(int phoneNbr);
		void		setDarkestsecret(std::string darkestSecret);
};

#endif
