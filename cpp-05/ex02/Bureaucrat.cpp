/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:48:01 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/04 09:47:13 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high 🚀 !!!!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low 🤏 !!!!");
}

// bureaucrat

Bureaucrat::Bureaucrat() : _name("no name"), _grade(1) {}

Bureaucrat::Bureaucrat(Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
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
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement() {
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

bool Bureaucrat::signForm(const AForm& obj) const {
	if (_grade <= obj.getGradeToSign()) {
		std::cout << _name << " signed form " << obj.getName() << std::endl;
		return (true);
	} else {
		std::cout << _name << " couldn't sign form " << obj.getName() << "due to grade too low 🤣🤣😂" << std::endl;
		return (false);
	}
}


