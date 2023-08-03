/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/02 18:36:50 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try
	{
		Bureaucrat *a = new Bureaucrat("lavinsky", 156);
		//a.increment();
		//a.decrement();
		//a.decrement();
		//a.decrement();
		//a.decrement();
		std::cout << *a << std::endl;
		delete a;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


