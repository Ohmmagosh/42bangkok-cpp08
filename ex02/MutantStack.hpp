/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:26:12 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/17 00:40:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
	public:
		typedef typename std::deque<T>::iterator	iterator;

		MutantStack() {
			std::cout << "MutantStack created!!" << std::endl;
		}
		MutantStack( const MutantStack& cp ) {
			*this = cp;
		}
		MutantStack& operator=( const MutantStack& cp) {
			if (this != &cp){};
			return (*this);
		}
		~MutantStack() {
			std::cout << "MutantStack destroy!!" << std::endl;
		}

		iterator	begin() {
			return (this->c.begin());
		}

		iterator	end() {
			return (this->c.end());
		}

		unsigned int	size() {
			return (this->c.size());
		}
};

#endif
