NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)


.cpp.o:
			$(CPP) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
