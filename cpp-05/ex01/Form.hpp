/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:32 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/26 11:33:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>

class Form {
	
	public:

	private:
		std::string _name;
		bool		_is_signed;
		const int 	_grade_to_sign;
		const int 	_grade_to_exec;
}

#endif