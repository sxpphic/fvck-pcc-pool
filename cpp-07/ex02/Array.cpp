/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:22:36 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 20:13:12 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include "Array.hpp"

// constructors and destructor 🏗️💣
template <typename T>
Array<T>::Array() {
	_dynamic_arr = new T[1];
	std::cout << _dynamic_arr[0] << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size) {
	_size = size;
	_dynamic_arr = new T[size];
}

template <typename T>
Array<T>::Array(const Array& other) {
	//copy
}

template <typename T>
Array<T>::~Array() {
	delete[] _dynamic_arr;
}

//getters 🫳

// overloads 💯

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

// std::ostream& operator<<(std::ostream& out, const Array& obj) {
//	return (out);
//}

// methods
*/