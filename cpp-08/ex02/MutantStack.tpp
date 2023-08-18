/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:52:20 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 14:52:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructors and destructor 🏗️💣

template<class T>
MutantStack<T>::MutantStack() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& other) {
	(void)other;
	//copy
}

template<class T>
MutantStack<T>::~MutantStack() {}

//getters 🫳

// overloads 💯

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

template<class T>
std::ostream& operator<<(std::ostream& out, const MutantStack<T>& obj) {
	return (out);
}

// methods
