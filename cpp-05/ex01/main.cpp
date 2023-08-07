/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/07 14:37:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat zoid("zoid", 1);
		Form generic_form("cancelamento", 1, 10);
		zoid.signForm(generic_form);
		
		std::cout << generic_form << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


