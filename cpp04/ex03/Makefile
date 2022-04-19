NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INCLUDES)

INCLUDES	=	./includes

SRCS		=	srcs/main.cpp			\
				srcs/AMateria.cpp		\
				srcs/Character.cpp		\
				srcs/Cure.cpp			\
				srcs/Ice.cpp			\
				srcs/MateriaSource.cpp

OBJS		=	$(SRCS:.cpp=.o)


all:		 $(NAME)

.cpp.o:
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
