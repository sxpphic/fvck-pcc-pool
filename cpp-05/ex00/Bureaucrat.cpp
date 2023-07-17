/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:48:01 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/17 18:07:02 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// exceptions

//Bureaucrat::GradeTooHighException::GradeTooHighException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high 🚀 !!!!");
}

//Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low 🤏 !!!!");
}

// bureaucrat

Bureaucrat::Bureaucrat() : _name("no name"), _grade(1) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}


