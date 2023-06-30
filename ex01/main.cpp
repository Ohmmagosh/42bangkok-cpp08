/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:16:52 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/30 23:19:34 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	// 3 6 9 11 17
	// {
	// 	try {
	// 		Span sp = Span(5);
	// 		sp.addNumber(6);
	// 		sp.addNumber(6);
	// 		sp.addNumber(17);
	// 	} catch (std::exception & e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	{
		Span sp = Span(10000);
		srand(time(0));
		for (int i = 0; i < 10000; i++) {
			sp.addNumber(rand());
		}
	}
	{
		try {
			int	arr[] = {2, 3, 4, 5, 6};
			std::vector<int>	vec(arr, arr + 5);
			Span sp = Span(5);
			sp.addNumber(vec);
			sp.printOut();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
