/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:52:27 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 11:10:29 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_H
# define MutantStack_H
# include <iostream>
# include <string>
# include <stack>

template<class T>
class MutantStack{
	
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		~MutantStack();
		MutantStack& operator=(const MutantStack& other);

		const T&		top() const;
		bool			empty() const;
		size_t			size() const;
		void			push(const T& data);
		void			pop();

	//	class iterator : public std::iterator<T> {};

	//	iterator	begin() {
	//		return (_my_deque.begin());
	//	}
	//	iterator	end() {
	//		return (_my_deque.end());
	//	}
		
		
	private:
		std::stack<T>	_my_stack;
		std::deque<T>	_my_deque;
};

#include "MutantStack.tpp"

#endif

