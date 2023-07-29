/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:48:01 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/25 13:27:32 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// exceptions

//Bureaucrat::GradeTooHighException::GradeTooHighException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high 🚀 !!!!, setting grade to 1");
}

//Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low 🤏 !!!!, setting grade to 150");
}

// bureaucrat

Bureaucrat::Bureaucrat() : _name("no name"), _grade(1) {}

Bureaucrat::Bureaucrat(Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try {
		if (grade < 1) {
			_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150) {
			_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		_grade = grade;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
	_grade = other._grade;
	return (*this);
}

// accessors

int Bureaucrat::getGrade() const { return (_grade); }

std::string Bureaucrat::getName() const { return (_name); }

std::ostream& operator<<(std::ostream& out, Bureaucrat& obj) {
	out << obj.getName() << ", bureaucrat grade "  << obj.getGrade(); 
	return (out);
}


// member functions

void	Bureaucrat::increment() {
	try {
		if (_grade > 1)
			_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrement() {
	try {
		if (_grade < 150)
			_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


