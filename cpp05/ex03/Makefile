NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INCLUDES)

INCLUDES	=	./includes

SRCS		=	srcs/main.cpp					\
				srcs/Bureaucrat.cpp				\
				srcs/AForm.cpp					\
				srcs/ShrubberyCreationForm.cpp	\
				srcs/RobotomyRequestForm.cpp	\
				srcs/PresidentialPardonForm.cpp	\
				srcs/Intern.cpp

OBJS		=	$(SRCS:.cpp=.o)


all:		$(NAME)

.cpp.o:
			$(CPP) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
