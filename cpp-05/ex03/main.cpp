/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:30:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 13:14:16 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void) {
	try {
			Bureaucrat zoid("zoid", 1);
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("presidential pardon", "random target");

			if (rrf) {
				std::cout << *rrf << std::endl;
				delete rrf;
			}
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


