#include <iostream>
#include <cctype>

void  print_upper(char *str)
{
	int   i = 0;   

 	while (str[i])
    std::cout << (char) toupper(str[i++]);
}

int main (int argc, char *argv[])
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
	return (0);
	}
	argv++;
	while (*argv)
		print_upper(*argv++);
	std::cout << std::endl;
	return 0;
}
