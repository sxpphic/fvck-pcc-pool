/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:52:20 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 10:53:02 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructors and destructor 🏗️💣

template<class T>
MutantStack<T>::MutantStack() {}
/*
template<class T>
MutantStack<T>::MutantStack(const MutantStack& other) {
}
*/
template<class T>
MutantStack<T>::~MutantStack() {}

//getters 🫳

// overloads 💯
/*
template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this == &other)
		return (*this);
	return (*this);
}*/

// methods

template<class T>
void	MutantStack<T>::test(void) {
	std::stack<T>	*upcast = this;
	std::deque<T>	*upcast2 = upcast;


	(void)upcast2;
}