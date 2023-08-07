#ifndef Intern_H
# define Intern_H
# include <iostream>
# include "AForm.hpp"

class Intern {
	
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);
		AForm*	makeForm(const std::string& form, const std::string& target);

	private:
};

#endif

