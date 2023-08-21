NAME		=	RPN 

SRC			=	main.cpp					\

HEADERS		= 	MutantStack.hpp				\
				MutantStack.tpp				\

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

run:		all
			./$(NAME)

.PHONY:		all clean fclean re
