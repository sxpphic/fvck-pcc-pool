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

template<class T>
MutantStack<T>::MutantStack(const MutantStack& other) {
	_my_stack = other._my_stack;
}

template<class T>
MutantStack<T>::~MutantStack() {}

//getters 🫳

// overloads 💯

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this == &other)
		return (*this);
	_my_stack = other._my_stack;
	return (*this);
}

// methods

template<class T>
const T& MutantStack<T>::top() const {
	return (_my_stack.top());
}

template<class T>
bool	MutantStack<T>::empty() const {
	return(_my_stack.empty());
}

template<class T>
size_t	MutantStack<T>::size() const {
	return(_my_stack.size());
}

template<class T>
void	MutantStack<T>::push(const T& data) {
	_my_deque.push_front(data);
	_my_stack.push(data);
}

template<class T>
void	MutantStack<T>::pop() {
	_my_deque.pop_front();
	_my_stack.pop();
}

