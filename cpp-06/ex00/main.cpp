#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	std::cout << argc << std::endl;

	ScalarConverter::convert(std::string(argv[1]));

	return (0);
}