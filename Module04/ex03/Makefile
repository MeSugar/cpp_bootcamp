NAME		=	Materia

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	ClassAMateria.hpp ClassIce.hpp ClassCure.hpp ClassCharacter.hpp ClassMateriaSource.hpp 

SRCS		=	ClassAMateria.cpp ClassIce.cpp ClassCure.cpp ClassCharacter.cpp ClassMateriaSource.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -g -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re