/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:35:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/22 13:54:09 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_H
# define ScalarConverter_H
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cctype>
# include <stdlib.h>

# define TYPE_CHAR 1
# define TYPE_INT 2
# define TYPE_FLOAT 3
# define TYPE_DOUBLE 4

class ScalarConverter {
	
	public:
		~ScalarConverter();

		static void convert(const std::string& num);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		
		static int 	check_edge_cases(const std::string& str, int type_to_check);
		static void	int_type(const std::string& str_num);
		static void	char_type(const std::string& str_num);
		static void float_type(const std::string& str_num);
		static void	double_type(const std::string& str_num);
		static int	check_is_valid(const std::string& str);
	
};




#endif

