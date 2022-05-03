NAME		=	test

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

CC			=	c++

SRCS		=	main.cpp	\
				Array.cpp

OBJS		=	$(SRCS:.cpp=.o)


.cpp.o:
			$(CC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
