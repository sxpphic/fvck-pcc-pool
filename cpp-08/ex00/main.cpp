/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:01:00 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/16 15:10:19 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	try {
		std::vector<int> nums_vec;
		std::deque<int> nums_que;
		std::list<int> nums_lst;

		nums_vec.push_back(20);
		nums_vec.push_back(21);
		nums_vec.push_back(22);

		nums_que.push_back(20);
		nums_que.push_back(21);
		nums_que.push_back(22);

		nums_lst.push_back(20);
		nums_lst.push_back(21);
		nums_lst.push_back(22);
		
		easyfind< std::vector<int> >(nums_vec, 22);
				
		easyfind(nums_lst, 22);

		easyfind< std::deque<int> >(nums_que, 25);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}