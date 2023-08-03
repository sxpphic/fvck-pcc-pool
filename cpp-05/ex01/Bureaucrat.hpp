/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:47:58 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/03 09:10:31 by vipereir         ###   ########.fr       */
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
		Bureaucrat(Bureaucrat& other);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat& other);
		friend std::ostream& operator<<(std::ostream& out, Bureaucrat& obj);
		int 		getGrade() const;
		std::string getName() const;
		void		increment();
		void		decrement();

		void		signForm(void);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what(void) const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what(void) const throw();
		};	

	private:
		const	std::string _name;
		int 				_grade;
	
};

#endif