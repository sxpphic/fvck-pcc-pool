/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:35:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/15 16:35:24 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_H
# define ScalarConverter_H
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cctype>

# define TYPE_CHAR 1
# define TYPE_INT 2
# define TYPE_FLOAT 3
# define TYPE_DOUBLE 4

class ScalarConverter {
	
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& other);

		static void convert(const std::string& num);

	private:
};

#endif

