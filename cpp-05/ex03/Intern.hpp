/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:05:03 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 13:05:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
# define Intern_H
# include <iostream>
# include "AForm.hpp"

class Intern {
	
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		
		Intern& operator=(const Intern& other);
		AForm*	makeForm(const std::string& form, const std::string& target);

	private:
};

#endif

