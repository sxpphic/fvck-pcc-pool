/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:29 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/07 14:33:26 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return ("Form says: grade too HIGH 😕");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form says: grade too LOW 😭");
}


Form::Form() : _name("generic Form"), _is_signed(false), _grade_to_sign(1), _grade_to_exec(1) {}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec) {
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
	if (this == &other)
		return (*this);
		
	_is_signed = other._is_signed;
	return (*this);
}

//getters
const std::string& Form::getName(void) const { return (_name); }
bool Form::getIsSigned(void) const { return (_is_signed); }
int Form::getGradeToSign(void) const { return (_grade_to_sign); }
int Form::getGradeToExec(void) const { return (_grade_to_exec); }

std::ostream& operator<<(std::ostream& out, const Form& obj) {
	out << "Form name: " << obj.getName() << std::endl;
	out << "Is signed: " << obj.getIsSigned() << std::endl;
	out << "Grade to sign: " << obj.getGradeToSign() << std::endl;
	out << "Grade to exec: " << obj.getGradeToExec() << std::endl;
	return (out);
}

void	Form::beSigned(const Bureaucrat& obj) {
	if (obj.getGrade() <= _grade_to_sign)
		_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

