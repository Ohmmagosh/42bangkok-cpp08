/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:35:09 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/16 22:33:08 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <sstream>
# include <algorithm>
# include <time.h>

class Span {
	public:
		Span( unsigned int N );
		Span( const Span& cp );
		Span& operator=(const Span& cp);
		~Span();

		void	addNumber(int n);
		void	addNumber(const std::vector<int>& vec);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	printOut(void) const;
	class	itTomuch : std::exception {
		const char * what() const throw() {
			return "data is full";
		};
	};
	class	itDuplicate : std::exception {
		const char * what() const throw() {
			return "data is duplicate";
		};
	};
	class	itNotEnoughtData : std::exception {
		const char * what() const throw() {
			return "data not enought";
		};
	};
	private:
		unsigned int				N;
		std::vector<int>			data;

};

#endif
