/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:52:20 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 08:38:38 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructors and destructor 🏗️💣

template<class T>
MutantStack<T>::MutantStack() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other) {}

template<class T>
MutantStack<T>::~MutantStack() {}

//getters 🫳

// overloads 💯

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}

// methods

template <class T>
typename MutantStack<T>::iterator	MutantStack< T >::begin(void)
{
	return (std::stack<T>::c.begin());
}

template < class T >
typename MutantStack<T>::iterator	MutantStack< T >::end(void)
{
	return (std::stack< T >::c.end());
}