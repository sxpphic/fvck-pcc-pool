NAME		=	many_forms

SRC			=	main.cpp					\
				Bureaucrat.cpp				\
				AForm.cpp					\
				ShrubberyCreationForm.cpp 	\
				RobotomyRequestForm.cpp 	\
				PresidentialPardonForm.cpp 	\
				Intern.cpp					\


HEADERS		= 	Bureaucrat.hpp				\
				AForm.hpp					\
				ShrubberyCreationForm.hpp 	\
				RobotomyRequestForm.hpp 	\
				PresidentialPardonForm.hpp 	\
				Intern.hpp					\

CC			=	c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

all:		$(NAME)

$(NAME):	$(SRC) $(HEADERS)
			$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:		
			$(RM) -r *.dSYM

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
