#include "ShrubberyCreationForm.hpp"

// constructors and destructor 🏗️💣

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {
	//copy
	(void)other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//getters 🫳

// overloads 💯

/* ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
} */
// acho q n precisa desses members functions pq eu ja tenho da classe base

/* std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& obj) {
	(void)obj;

	return (out);
} */

bool ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (!checkRequirements(executor)) {
		return (false);
	}
	std::ofstream shrubbery;
	std::string file_name = _target + "_shrubbery";

	shrubbery.open(file_name.c_str());

	shrubbery << "                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\\\. \\ |  // |\n                d\\ \\\\\\|_////\n                qP| \\\\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\\\n            `---__/|_\\\\   //|  __\n                  `-'  `-'`-'-'\n" << std::endl;
	shrubbery << "                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\\\. \\ |  // |\n                d\\ \\\\\\|_////\n                qP| \\\\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\\\n            `---__/|_\\\\   //|  __\n                  `-'  `-'`-'-'\n" << std::endl;
	shrubbery << "                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\\\. \\ |  // |\n                d\\ \\\\\\|_////\n                qP| \\\\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\\\n            `---__/|_\\\\   //|  __\n                  `-'  `-'`-'-'\n" << std::endl;
	shrubbery.close();
	return (true);
}