/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:29 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/07 13:03:31 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Form says: grade too HIGH 😕");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Form says: grade too LOW 😭");
}


AForm::AForm() : _name("generic Form"), _is_signed(false), _grade_to_sign(1), _grade_to_exec(1) {}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec) {
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other) {
	if (this == &other)
		return (*this);
		
	_is_signed = other._is_signed;
	return (*this);
}

//getters
const std::string& AForm::getName(void) const { return (_name); }
bool AForm::getIsSigned(void) const { return (_is_signed); }
int AForm::getGradeToSign(void) const { return (_grade_to_sign); }
int AForm::getGradeToExec(void) const { return (_grade_to_exec); }

std::ostream& operator<<(std::ostream& out, const AForm& obj) {
	out << "Form name: " << obj.getName() << std::endl;
	out << "Is signed: " << obj.getIsSigned() << std::endl;
	out << "Grade to sign: " << obj.getGradeToSign() << std::endl;
	out << "Grade to exec: " << obj.getGradeToExec() << std::endl;
	return (out);
}

void	AForm::beSigned(const Bureaucrat& obj) {
	if (obj.signForm(*this))
		_is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

bool	AForm::checkRequirements(const Bureaucrat& obj) const {
	if (!getIsSigned()) {
		std::cout << "Form not signed !!!" << std::endl;
		return (false);
	}
	if (obj.getGrade() >= getGradeToExec()) {
		return (true);
	} else {
		throw AForm::GradeTooLowException();
	}
	return (false);
}


