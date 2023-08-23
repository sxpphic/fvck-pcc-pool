/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:38:04 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/23 10:40:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool is_number(const std::string& str) {
	if (str.empty())
		return (false);
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int rpn(const std::string& input) {
	std::stringstream	ss;
	std::string			word;
	ss.str(input);
	std::stack<int>			rpn_stack;

	while (!ss.eof()) {
		std::getline(ss, word, ' ');
		if (word.empty())
			continue ;
		if (word == "+" || word == "-" || word == "/" || word == "*") {
			if (rpn_stack.size() < 2) {
				std::cout << "invalid operations !!" << std::endl;
				exit(0);
			}
			int temp1 = rpn_stack.top();
			rpn_stack.pop();
			int temp2 = rpn_stack.top();
			rpn_stack.pop();
			if (word == "+")
				rpn_stack.push(temp2 + temp1);
			else if (word == "-")
				rpn_stack.push(temp2 - temp1);
			else if (word == "*")
				rpn_stack.push(temp2 * temp1);
			else if (word == "/")
				rpn_stack.push(temp2 / temp1);
		} else if (is_number(word)) {
			int num = atoi(word.c_str());
			if (num >= 10) {
				std::cout << "Error" << std::endl;
				exit(0);
			}
			rpn_stack.push(num);
		} else {
			std::cout << "Error" << std::endl;
			exit(0); // return ou exit ? exit n limpa;
		}
	}
	if (rpn_stack.size() == 1)
		std::cout << rpn_stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
	return (0);
}
