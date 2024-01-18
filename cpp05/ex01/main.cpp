/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:56:54 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/01/18 01:08:33 by nerrakeb         ###   ########.fr       */
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
		
		b.signForm(form); // This couldn't sign
		std::cout << form;
		std::cout << std::string(45, '-') << std::endl;


		Bureaucrat br("Jason", 4);
		Form form1("CandidatForm", 94, 33);
        std::cout << br << "\n";
		form1.beSigned(br);
		std::cout << form1;
		br.signForm(form1);

		form.beSigned(b); // This should throw Form::GradeTooLowException

	} catch (const std::exception& e) {

		std::cout << std::string(45, '-') << std::endl;
		std::cerr << "Exception: " << e.what() << "\n";
	}

    return 0;
}
