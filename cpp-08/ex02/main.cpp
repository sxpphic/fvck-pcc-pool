/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:09:10 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 14:42:38 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {

	MutantStack<int> noturno;

	noturno.push(1);
	noturno.push(1);

	std::cout << noturno.iterator << std::endl;
	
	return (0);
}