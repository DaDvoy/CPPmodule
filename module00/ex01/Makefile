NAME = phonebook

SRC = main.cpp PhoneBook.cpp ContactData.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++ -Wall -Wextra -Werror

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
		