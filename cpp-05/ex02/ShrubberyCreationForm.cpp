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

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	(void)executor;
	std::cout << "adsfa" << std::endl;
}
