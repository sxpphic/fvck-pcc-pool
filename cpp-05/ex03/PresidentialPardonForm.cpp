#include "PresidentialPardonForm.hpp"

// constructors and destructor 🏗️💣

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other) {
	_target = other._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

//getters 🫳

// overloads 💯

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this == &other)
		return (*this);
	*this = other;
	_target = other._target;
	return (*this);
}

bool PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (!checkRequirements(executor)) {
		return (false);
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}

