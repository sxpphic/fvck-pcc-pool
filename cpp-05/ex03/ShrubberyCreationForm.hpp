#ifndef ShrubberyCreationForm_H
# define ShrubberyCreationForm_H
# include <iostream>
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		bool					execute(const Bureaucrat& executor) const;

	private:
		std::string 	_target;

};

#endif