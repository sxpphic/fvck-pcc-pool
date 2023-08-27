/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:07 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 11:42:15 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_number(const std::string& str) {
	if (str.empty())
		return (false);
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	if (atof(str.c_str()) > INT_MAX)
		return (false);
	return (true);
}

bool	validate_input(char** argv) {
	for (int i = 1; argv[i]; i++) {
		if (!is_number(argv[i]))
			return (false);
	}
	return (true);
}

void	print_before(char** argv) {
	std::cout << "Before:\t";

	for (int i = 0; argv[i]; i++) {
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;
}

void	print_after(const std::list<int>& list) {
	std::cout << "After:\t";

	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


void	fill_list(std::list<int>& list, char** argv) {
	for (int i = 0; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
}

void	sort_list(std::list<int>& list, char** argv, float& ltime) {
	(void)ltime;
	fill_list(list, argv);

}
