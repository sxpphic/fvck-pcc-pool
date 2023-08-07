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

char int_conversor(const std::string& str_num) {
	std::istringstream iss(str_num);
	(void)str_num;

	char val;
	if (!(iss >> val)) {
		//fvck;
	}
	return (val);
}

void ScalarConverter::convert(const std::string& num) {
	char inum = int_conversor(num);
	std::cout << inum << std::endl;
}

