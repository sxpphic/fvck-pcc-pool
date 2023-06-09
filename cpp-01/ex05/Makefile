NAME 		= harl

SRC 		= main.cpp			\
			  Harl.cpp			\

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
				c++ $(CPPFLAGS) -o $(NAME) $(SRC)
clean:
				rm -f $(NAME)
fclean:		clean

re:			fclean all

.PHONY: all clean fclean re
