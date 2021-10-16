NAME = zombie

HEADER = Zombie.hpp

SRC = randomChump.cpp Zombie.cpp newZombie.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++ -Wall -Wextra -Werror -std=c++98

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CXX) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
		