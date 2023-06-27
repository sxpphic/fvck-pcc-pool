NAME	 	=	npc_3

SRC 		=	main.cpp	 	\
				ClapTrap.cpp 	\
				FragTrap.cpp 	\

CC			=	c++

CPPFLAGS 	= 	-Wall -Wextra -Werror -std=c++98

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