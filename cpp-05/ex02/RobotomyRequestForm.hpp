#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H
# include <iostream>
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm {
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		virtual void		execute(const Bureaucrat& executor) const;

	private:
		std::string 	_target;

};

#endif

