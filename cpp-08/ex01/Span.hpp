/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:11:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 08:36:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_H
# define Span_H
# include <iostream>
# include <string>
# include <set>
# include <vector>

class Span {
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);

		void 	check_conditions();
		void 	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();		
		void	addRange(int start, int end);

		template <typename Iterator>
		void	addRange(Iterator begin, Iterator end) {
			for (Iterator it = begin; it != end; it++) {
				addNumber(*it);
			}
		}

	private:
		std::multiset<int>	_my_set;
		unsigned int 		_max_size;
		unsigned int 		_size;
};

#endif

