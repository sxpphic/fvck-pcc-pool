/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 12:59:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void) {
	try {
		Bureaucrat zoid("zoid", 1);
		AForm *generic_form = new PresidentialPardonForm("target ban");
		*generic_form = *generic_form;

		zoid.signForm(*generic_form);
		zoid.executeForm(*generic_form);
		delete generic_form;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


