#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
		
		bool					execute(const Bureaucrat& executor) const;

	private:
		std::string 	_target;

};

#endif

