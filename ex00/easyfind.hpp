/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:17:21 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/30 23:16:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <exception>
# include <algorithm>

template <typename T>
int	easyfind(T& container, int num) {
	std::vector<int>::iterator ret = std::find(container.begin(), container.end(), num);
	if (ret == container.end())
		throw std::out_of_range("value not found");
	return (*ret);
};

#endif
