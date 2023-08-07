/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/07 14:43:42 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void) {
	try {
		Bureaucrat zoid("zoid", 1);
		AForm *generic_form = new RobotomyRequestForm("target ban");
		
		zoid.signForm(*generic_form);
		zoid.executeForm(*generic_form);

		delete generic_form;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


