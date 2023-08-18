/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:05:00 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 13:09:15 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// constructors and destructor 🏗️💣

Intern::Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern::~Intern() {}

//getters 🫳

// overloads 💯

Intern& Intern::operator=(const Intern& other) {
	if (this == &other)
		return (*this);
	return (*this);
}

// methods

AForm* Intern::makeForm(const std::string& form, const std::string& target) {
	std::string forms_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	for (; i < 3; i++) {
		if (form == forms_names[i]) {
			std::cout << "intern creates " << form << std::endl;
			break ;
		}
	}

	switch (i) {
		case (0):
			return (new ShrubberyCreationForm(target));
			break;
		case (1):
			return (new RobotomyRequestForm(target));
			break;
		case (2):
			return (new PresidentialPardonForm(target));
			break;
		case (3):
			std::cout << "form does not exist !!!!!!" << std::endl;
			break;
		default:
			break;
	}
	return (NULL);
}



