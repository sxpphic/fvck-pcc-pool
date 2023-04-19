#include <iostream>
#include <cctype>
#include <string>

void  print_upper(char *str)
{
	std::string msg (str);

  for(std::string::iterator it = msg.begin(); it < msg.end(); it++)
      std::cout << (char) toupper(*it);
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
