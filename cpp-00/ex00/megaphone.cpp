#include <iostream>
#include <cctype>
using	namespace std;

void  print_upper(char *str)
{
	int   i = 0;   

 	while (str[i])
    cout << (char) toupper(str[i++]);
}

int main (int argc, char *argv[])
{
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl; 
	return (0);
	}
	*argv++;
	while (*argv)
		print_upper(*argv++);
	std::cout << std::endl;
	return 0;
}
