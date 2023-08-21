/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:35:09 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 14:00:53 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// constructors and destructor 🏗️💣

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	//copy
	(void)other;
}

ScalarConverter::~ScalarConverter() {}

//getters 🫳

// overloads 💯

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

// methods

void ScalarConverter::double_type(const std::string& str_num) {
	double val = atof(str_num.c_str());

	if (check_edge_cases(str_num, TYPE_DOUBLE)) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else {
		if (val >= 32 && val <= 126)
			std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;

}
void ScalarConverter::float_type(const std::string& str_num) {
	float val = atof(str_num.c_str());
		
	if (check_edge_cases(str_num, TYPE_FLOAT)) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else {
		if (val >= 32 && val <= 126)
			std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;

}

void ScalarConverter::char_type(const std::string& str_num) {
 	std::istringstream buffer(str_num);
	char val;
	
	buffer >> val;
	if (val >= 32 && val <= 126)
		std::cout << "char: '" <</*  static_cast<char> */(val) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << std::fixed << std::setprecision(1);		
	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}


void ScalarConverter::int_type(const std::string& str_num) {
	std::istringstream buffer(str_num);
	int val;
	
	buffer >> val;
	if (val >= 32 && val <= 126)
		std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl; // checar também se deu overflow no char e printar impossible ??
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << std::fixed << std::setprecision(1);		
	std::cout << "int: " << /* static_cast<int> */(val) << std::endl;
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

int ScalarConverter::check_edge_cases(const std::string& str, int type_to_check) {
	if (type_to_check == TYPE_FLOAT) {
		std::string	pseudo_literals_float[4] = {"nanf", "inff", "+inff", "-inff"};
		
		for (int i = 0; i < 3; i++) {
		if (str == pseudo_literals_float[i])
			return (TYPE_FLOAT);
		}
	}
	else if (type_to_check == TYPE_DOUBLE) {
		std::string	pseudo_literals_double[4] = {"nan", "inf", "+inf", "-inf"};
		
		for (int i = 0; i < 3; i++) {
			if (str == pseudo_literals_double[i])
				return (TYPE_DOUBLE);
		}
	}
	return (0);
}

int ScalarConverter::check_is_valid(const std::string& str) {
	if (check_edge_cases(str, TYPE_FLOAT))
		return (TYPE_FLOAT);
	else if (check_edge_cases(str, TYPE_DOUBLE))
		return (TYPE_DOUBLE);

	short dot_counter = 0;
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (TYPE_CHAR);
	size_t start = (str[0] == '-' || str[0] == '+') ? 1 : 0;
	for (size_t i = start; i < str.length(); i++) {
		if (std::isdigit(str[i]) == 0) {
			if (str[i] == 'f' && i == str.length() - 1 && dot_counter == 1)
				return (TYPE_FLOAT);
			else if (str[i] == '.') //&& i != str.length() - 1 && str[i + 1] != 'f')
				dot_counter++;
			else
				return (false);
		}
	}
	if (dot_counter == 1)
		return (TYPE_DOUBLE);
	else if (dot_counter > 1)
		return (false);
	return (TYPE_INT);
}

void ScalarConverter::convert(const std::string& num) {
	int type;

	type = check_is_valid(num);
	if (!type)
		return ;
	switch (type) {
		case TYPE_INT:
			int_type(num);
			break;
		case TYPE_CHAR:
			char_type(num);
			break;
		case TYPE_FLOAT:
			float_type(num);
			break;
		case TYPE_DOUBLE:
			double_type(num);
			break;
		default:
			break;
	}
	//std::cout << check_is_valid(num) << std::endl;
}

