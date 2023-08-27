/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:19 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 11:42:41 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
	std::list<int>	list;
	float	ltime;
//	float	dtime;
	if (!validate_input(argv) || argc == 1) {
		std::cerr << "Error" << std::endl;
		return (1);
	}
	argv++; // andar o nome
	print_before(argv);
	sort_list(list, argv, ltime);
	//sort_deque(argv, dtime);
	print_after(list);

	return (0);
}