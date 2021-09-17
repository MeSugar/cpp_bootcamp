NAME		=	Unnecessary_violence

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	Weapon.hpp HumanA.hpp HumanB.hpp

SRCS		=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re