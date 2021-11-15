NAME = Brain

HEADER = Animal.hpp Brain.hpp 

SRC = main.cpp Animal.cpp Brain.cpp

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