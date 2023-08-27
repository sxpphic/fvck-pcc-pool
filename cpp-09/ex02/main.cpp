/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:19 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/27 10:07:36 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
	std::list<int>	list;
	std::deque<int>	deque;
	double	ltime;
	double	dtime;
	if (!validate_input(argv) || argc == 1) {
		std::cerr << "Error" << std::endl;
		return (1);
	}
	argv++;
	print_before(argv);
	sort_list(list, argv, ltime);
	sort_deque(deque, argv, dtime);
	print_after(list);
	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time to process a range of " << list.size() << " elements with std::list " << ltime  << " ms" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque " << dtime << " ms" << std::endl;

	return (0);
}