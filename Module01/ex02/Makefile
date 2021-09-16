NAME		=	HI_THIS_IS_BRAIN

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

SRCS		=	main.cpp

all : $(NAME)

$(NAME) : $(SRCS)
		@$(CC) -o $(NAME) $(CFLAGS) $(SRCS)

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re