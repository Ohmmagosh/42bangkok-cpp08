/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:51:29 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/17 00:37:42 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <sstream>

int main()
{
	{
		MutantStack<int> st;

		st.push(1);
		st.push(2);
		st.push(3);
		MutantStack<int>::iterator	it = st.begin();
		std::cout << "begin " << *it << std::endl;
		it = st.end();
		it--;
		std::cout << "end " << *it << std::endl;
		st.pop();
		it = st.end();
		it--;
		std::cout << "end " << *it << std::endl;
	}
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
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
	}
	return 0;
}
