NAME		=	Irrational_Class

SRC			=	main.cpp			\
				AMateria.cpp		\
				Character.cpp		\
				MateriaSource.cpp	\
				Ice.cpp				\
				Cure.cpp			\
				FreeStack.cpp		\

CC			=	c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 #-g -fsanitize=address

RM			= rm -f

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:		
			$(RM) -r *.dSYM

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
