NAME		=	Amazonas_guerreando

SRC			=	main.cpp		\
				AAnimal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp	\
				Brain.cpp		\

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

re:			fclean all

.PHONY:		all clean fclean re
