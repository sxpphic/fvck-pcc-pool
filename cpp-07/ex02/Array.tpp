/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:22:40 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 20:08:35 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template <typename T>
class Array {
	
	public:
 		Array() {
			_size = 0;
			_dynamic_arr = new T[0];
		};
		Array(unsigned int size) {
			_size = size;
			_dynamic_arr = new T[size];
		};
		Array(const Array& other) {
			_size = other._size;
			_dynamic_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_dynamic_arr[i] = other._dynamic_arr[i];
			}
		};
		~Array() {
			delete[] _dynamic_arr;
		};
		Array& operator=(const Array& other) {
			_size = other._size;
			delete[] _dynamic_arr;
			_dynamic_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_dynamic_arr[i] = other._dynamic_arr[i];
			}
			return (*this);
		};
		unsigned int size(void) {
			return (_size);
		}
		T& operator[](unsigned int index) { // será q devo receber int ou u_int, já q se eu botar int o cara numca vai acessor todos as casa já q tem u_int de tamanho, mas se eu botar pra receber uint ele acessa tudo mas n posso dar erro se passsar negativo, pq deve converter.
			if (index >= _size)
				throw std::runtime_error("index out of bounds");
			return (_dynamic_arr[index]);
		}

	private:
		unsigned int	_size;
		T*				_dynamic_arr;
		
};
