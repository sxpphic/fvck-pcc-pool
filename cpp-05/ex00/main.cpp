/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/25 12:08:23 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

	try
	{
		Bureaucrat a("lavinsky", 150);
		//a.increment();
		//a.decrement();
		//a.decrement();
		//a.decrement();
		//a.decrement();
		std::cout << a << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


