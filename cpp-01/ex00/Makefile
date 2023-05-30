NAME 		= The.Last.of.Us.S01E09.2160p.HMAX.WEB-DL.DDP5.1.Atmos.DV.MKV.x265-SMURF

SRC 		= newZombie.cpp		\
			  randomChump.cpp	\
			  Zombie.cpp		\
			  main.cpp			\

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
				c++ $(CPPFLAGS) -o $(NAME) $(SRC)
clean:
				rm -f $(NAME)
fclean:		clean

re:			fclean all

.PHONY: all clean fclean re
