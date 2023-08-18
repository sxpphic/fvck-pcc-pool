/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:32 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 12:08:04 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;


class Form {
	
	public:
		Form();
		Form(std::string name, int grade_to_sign, int grade_to_exec);
		Form(const Form& other);
		~Form();
		Form& operator=(const Form& other);
		
		const std::string&		getName(void) const;
		bool					getIsSigned(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExec(void) const;
		void					beSigned(const Bureaucrat& obj);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what(void) const throw();	
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		const int 			_grade_to_sign;
		const int 			_grade_to_exec;
};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif