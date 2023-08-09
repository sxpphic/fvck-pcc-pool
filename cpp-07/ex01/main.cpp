/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:55:06 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 18:46:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int int_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	std::string str_arr[4] = {"a", "b", "c", "d"};
	
	iter(int_arr, 10, print_item);
	iter(str_arr, 4, print_item);
	return (0);
}

