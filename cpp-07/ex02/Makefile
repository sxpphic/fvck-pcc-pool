NAME		=	array_array

SRC			=	main.cpp					\

#OBJ			=	$(SRC:.cpp=.o)

HEADERS		=	Array.hpp					\

CC			=	c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

#%.o: %.cpp
#	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(SRC) $(HEADERS)
			$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:		
			$(RM) -r *.dSYM
#			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
