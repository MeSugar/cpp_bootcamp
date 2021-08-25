NAME		=	megaphone

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	./

SRCS		=	megaphone.cpp

all : $(NAME)

$(NAME) : $(SRCS)
		@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) -I $(INCLUDES)

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re