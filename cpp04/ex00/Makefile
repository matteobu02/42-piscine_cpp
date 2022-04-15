NAME		=	test

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp		\
				Animal.cpp		\
				Dog.cpp			\
				cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp

OBJS		=	$(SRCS:.cpp=.o)


all:		$(NAME)

.cpp=.o:
			$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
