NAME = Serialization

HEADER = Serialization.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++ -Wall -Wextra -Werror -std=c++98

RM = rm -f

.PHONY:		all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CXX) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all