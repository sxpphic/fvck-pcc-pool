#ifndef ScalarConverter_H
# define ScalarConverter_H
# include <iostream>
# include <string>
# include <sstream>

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

