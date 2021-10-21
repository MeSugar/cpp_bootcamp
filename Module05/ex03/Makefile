NAME		=	Internship_I

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

INCLUDES	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

SRCS		=	Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
		@$(CC) -g -o $(NAME) $(CFLAGS) $(SRCS) -I.

clean :
		@rm -rf $(NAME)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re