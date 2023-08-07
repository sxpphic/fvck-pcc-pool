/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/07 13:29:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void) {
	try {
		Bureaucrat cara("adf", 10);
		AForm *a = new PresidentialPardonForm("féla");
		a->beSigned(cara);

		//std::cout << *a << std::endl;
		cara.executeForm(*a);
		delete a;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


