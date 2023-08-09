/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:55:10 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 18:22:11 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <string>
# include <iostream>

template <typename T>
void	print_item(const T& item) {
	std::cout << item << std::endl;
}

template <typename T>
void	iter(T* arr, int arr_size, void (*f)(const T& item)) {
	for (int i = 0; i < arr_size; i++) {
		(*f)(arr[i]);
	}
}

#endif
