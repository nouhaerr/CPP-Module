/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 05:07:25 by nerrakeb          #+#    #+#             */
/*   Updated: 2024/03/19 02:42:29 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

static void	myTest() {
	MutantStack<std::string>	t;

	t.push("Nouha");
	t.push("is");
	t.push("name");
	t.push("My");

	assert(t.top() == "My");
	std::cout << t.top() << std::endl;

	int i = 0;
	while (i++ < 3)
		t.pop();
	assert(t.top() == "Nouha");
	std::cout << t.top() << std::endl;

	MutantStack<int>	st;

	st.push(10);
	st.push(7);
	st.push(21);
	MutantStack<int>::iterator it = st.begin();
	MutantStack<int>::iterator ite = st.end();

	int	multiple = 1;
	for( ; it != ite; ++it) {
		multiple *= (*it);
	}
	std::cout << "multiple = " << multiple << std::endl;
}

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "______________list_test_____________\n";
	std::list<int>	li;
	li.push_back(5); 
	li.push_back(17) ;
	std::cout << li.back() << std::endl;
	li.pop_back();
	std::cout << li.size() << std::endl;
	li.push_back(3);
	li.push_back(5); 
	li.push_back(737);
	li.push_back(0);
	std::list<int>::iterator itt = li.begin();
	std::list<int>::iterator itte = li.end();
	++itt;
	--itt;
	while (itt != itte)
	{
	    std::cout << *itt << std::endl;
	    ++itt;
	}
	
	std::cout << "______________My_test_____________\n";
	myTest();

	return 0;
}
