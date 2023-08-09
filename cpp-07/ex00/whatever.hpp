/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:15:08 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 17:34:01 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
# include <string>
# include <iostream>

template <typename T>
void	swap(T& a, T& b) {
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T> 
const T&	min(const T& a, const T& b) {
	return (a < b ? a : b);
}

template <typename T>
const T&	max(const T& a, const T& b) {
	return (a > b ? a : b);
}

#endif