NAME		=	Karen_2.0

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	Karen.hpp

SRCS		=	Karen.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re