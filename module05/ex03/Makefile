NAME = Intern

HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++ -Wall -Wextra -Werror -std=c++98 -Wno-reorder

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