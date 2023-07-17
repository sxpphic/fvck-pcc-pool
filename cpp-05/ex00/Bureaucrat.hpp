/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:47:58 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/17 18:07:06 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>

class Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		//Bureaucrat(Bureaucrat& other);
		~Bureaucrat();
		//Bureaucrat& operator=(Bureaucrat& other);

		class GradeTooHighException : public std::exception {
			public:
				//GradeTooHighException();
				virtual const char* what(void) const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
			//	GradeTooLowException();
				virtual const char* what(void) const throw();
		};	

	private:
		const	std::string _name;
		int 				_grade;
	
};

#endif