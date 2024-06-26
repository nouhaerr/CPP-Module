/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/23 21:41:45 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

	try {
		Bureaucrat b("Lucy", 100);
        Form form("SampleForm", 1, 75);
		std::cout << b << "\n";
		std::cout << form << "\n";
		
		b.signForm(form);
		std::cout << form << "\n";
		std::cout << std::string(45, '-') << std::endl;


		Bureaucrat br("Jason", 4);
		Form form1("CandidatForm", 94, 33);
        std::cout << br << "\n";
		form1.beSigned(br);
		std::cout << form1 << "\n";
		br.signForm(form1);

		form.beSigned(b);
	} catch (const std::exception& e) {
		std::cout << std::string(45, '-') << std::endl;
		std::cerr << "Exception: " << e.what() << "\n";
	}

    return 0;
}
