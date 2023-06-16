/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:35:06 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/16 17:49:23 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): N(N) {

}

Span::Span(const Span& cp) {
	*this = cp;
}

Span&	Span::operator=(const Span& cp) {
	if (this != &cp) {
		this->N = cp.N;
		if (this->N > 0) {
			this->data = cp.data;
		}
	}
	return (*this);
}

Span::~Span() {

}

void	Span::addNumber(int n) {
	std::vector<int>::iterator it;

	if (this->data.size() < this->N) {
		for (it = this->data.begin(); it != this->data.end(); it++) {
			if (*it == n)
				throw itDuplicate();
		}
		this->data.push_back(n);
	}
	else
		throw itTomuch();
}

void	Span::addNumber(const std::vector<int>& arr) {
	std::vector<int>::const_iterator it;
	for (it = arr.begin(); it != arr.end(); it++) {
		this->addNumber(*it);
	}
}

int	Span::longestSpan(void) const{
	std::vector<int>	sort;

	if (this->N > 1) {
		sort = this->data;
		std::sort(sort.begin(), sort.end());
		return (sort[this->N - 1] - sort[0]);
	} else {
		throw itNotEnoughtData();
	}
}

int	Span::shortestSpan(void) const{
	std::vector<int>	sort;

	if (this->N > 1) {
		sort = this->data;
		std::sort(sort.begin(), sort.end(), std::greater<int>());
		std::vector<int>::iterator	it;
		int	tmp = sort[0] - sort[1];
		for (it = sort.begin(); it != sort.end(); it++) {
			std::vector<int>::iterator	next = std::next(it);
			if (next == sort.end())
				break;
			if ((*it - *next) < tmp) {
				tmp = (*it - *next);
			}
		}
		std::cout << "tmp : "<< tmp << std::endl;
		return (tmp);
	}
	else {
		throw itNotEnoughtData();
		return 0;
	}
}

void	Span::printOut(void) const{
	std::vector<int>	vec = this->data;
	if (this->N < 1) {
		throw itNotEnoughtData();
		return;
	}
	std::vector<int>::iterator	it;
	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << std::endl;
	}
	return;
}
