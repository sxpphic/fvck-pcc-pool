NAME		=	Polymorphism.exe

SRC			=	main.cpp	\
				Animal.cpp	\
				Dog.cpp		\
				Cat.cpp		\

CC			=	c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:		
			$(RM) -r *.dSYM

fclean:		clean
			$(RM) $(NAME)

re:			fclean re

.PHONY:		all clean fclean re
