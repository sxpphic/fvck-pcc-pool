#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// constructors and destructor 🏗️💣

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern::~Intern() {}

//getters 🫳

// overloads 💯

Intern& Intern::operator=(const Intern& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

// methods


AForm* Intern::makeForm(const std::string& form, const std::string& target) {
	std::string forms_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	while (i < 3) {
		if (form == forms_names[i]) {
			std::cout << "intern creates " << form << std::endl;
			break ;
		}
		i++;
	}

	switch (i) {
		case (0):
			return (new ShrubberyCreationForm(target));
			break;
		case (1):
			return (new RobotomyRequestForm(target));
			break;
		case (2):
			return (new PresidentialPardonForm(target));
			break;
		case (3):
			std::cout << "form does not exist !!!!!!" << std::endl;
			break;
		default:
			break;
	}
	return (NULL);
}



