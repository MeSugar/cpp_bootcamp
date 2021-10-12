NAME		=	AnimalPlanet3

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	ClassAnimal.hpp ClassDog.hpp ClassCat.hpp ClassWrongAnimal.hpp ClassWrongCat.hpp ClassBrain.hpp

SRCS		=	ClassAnimal.cpp ClassDog.cpp ClassCat.cpp ClassWrongAnimal.cpp ClassWrongCat.cpp ClassBrain.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -g -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re