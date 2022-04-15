NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp		\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp


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
