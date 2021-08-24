NAME		=	MyAwesomePhoneBook

CFLAGS		=	-Wall -Wextra -Werror

CC			=	clang++

INCLUDES	=	PhoneBook.class.hpp Contact.class.hpp

SRCS		=	PhoneBook.class.cpp Contact.class.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re