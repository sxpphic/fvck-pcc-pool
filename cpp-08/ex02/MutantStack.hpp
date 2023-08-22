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
# include <vector>

template<class T>
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack();
	//	MutantStack(const MutantStack& other);
		~MutantStack();
	//	MutantStack& operator=(const MutantStack& other);
		void	test(void);
		
	private:

};

#include "MutantStack.tpp"

#endif

