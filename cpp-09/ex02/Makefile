NAME		=	PmergeMe 

SRC			=	main.cpp					\
				PmergeMe.cpp				\

HEADERS		= 	PmergeMe.hpp				\

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
