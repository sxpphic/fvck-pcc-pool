#include "RobotomyRequestForm.hpp"

// constructors and destructor 🏗️💣

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

//getters 🫳

// overloads 💯
/* RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}
 */
/* std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& obj) {
	return (out);
}
 */

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	(void)executor;
	std::cout << "adsfa" << std::endl;
}

