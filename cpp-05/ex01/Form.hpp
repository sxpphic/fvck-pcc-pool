/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:32 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/03 09:12:18 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"


class Form {
	
	public:
		Form();
		Form(const Form& other);
		~Form();
		Form& operator=(const Form& other);
		
		std::string getName(void);
		bool		getIsSigned(void);
		int			getGradeToSign(void);
		int			getGradeToExec(void);
		friend std::ostream& operator<<(std::ostream& out, const Form& obj);
		void		beSigned(const Bureaucrat& obj);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what(void) const throw();	
		};

	private:
		std::string _name;
		bool		_is_signed;
		const int 	_grade_to_sign;
		const int 	_grade_to_exec;
};

#endif