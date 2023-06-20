NAME		=	Fixed

SRC			=	main.cpp	\
				Fixed.cpp	\

CCP			=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=cpp98

RM			=	rm -f

all:		$(NAME)

(NAME):		$(SRC)
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME) 

clean:		
			$(RM) -r *.dSYM

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
