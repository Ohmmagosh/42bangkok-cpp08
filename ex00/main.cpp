/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:16:52 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/15 22:27:17 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <sstream>

int main(void) {
	int arr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int>	vec(arr, arr + 6);
	try {
		std::cout << easyfind(vec, 2) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
