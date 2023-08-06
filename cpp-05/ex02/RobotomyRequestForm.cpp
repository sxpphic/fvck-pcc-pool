#include "RobotomyRequestForm.hpp"

// constructors and destructor 🏗️💣

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {
	_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

//getters 🫳

// overloads 💯

 RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this == &other)
		return (*this);
	*this = other;
	_target = other._target;

	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	std::srand(static_cast<unsigned>(time(0)));
	int random_num = (rand() % 100) + 1;

	(void)executor;
	std::cout << "* DRILLING NOISES *" << std::endl;
	std::cout << "* 🛠️🤖 bzzzzzz bzzzzzz 🤖🛠️ *" << std::endl;

	if (random_num > 50) {
		std::cout << _target << " has been robotomized 🦾🤖" << std::endl;
	} else {
		std::cout << "robotomy has failed 🥵😵‍💫🤒" << std::endl;
	}

}

