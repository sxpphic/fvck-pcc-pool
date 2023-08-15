NAME		=	castingv3

SRC			=	main.cpp					\
				Base.cpp					\
				functions.cpp				\

HEADERS		= 	Base.hpp					\
				A.hpp						\
				B.hpp						\
				C.hpp						\
				functions.hpp				\

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
