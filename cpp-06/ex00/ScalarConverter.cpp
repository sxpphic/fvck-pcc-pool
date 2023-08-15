/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:35:09 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/15 16:35:11 by vipereir         ###   ########.fr       */
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


int int_type(const std::string& str_num) {
 	std::istringstream buffer(str_num);

	int val;
	buffer >> val;
	// tem q terminar
	//std::cout << "char: " << "'" << ((isprint(val)) ? static_cast<char>(val) : "Non displayable") << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;



	return (val);
}

int check_is_valid(const std::string& str) { // falta tratar nan e inf
	short dot_counter = 0;
	if (str.length() == 1) // to achando q devo passar os char com ''
		return (TYPE_CHAR);

	size_t start = (str[0] == '-' || str[0] == '+') ? 1 : 0;
	for (size_t i = start; i < str.length(); i++) {
		if (std::isdigit(str[i]) == 0) {
			if (str[i] == 'f' && i == str.length() - 1)
				return (TYPE_FLOAT);
			else if (str[i] == '.' && i != str.length() - 1 && str[i + 1] != 'f') // deixo terminar com . ? mlhr n
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
		default:
			break;
	}
	std::cout << check_is_valid(num) << std::endl;
}

