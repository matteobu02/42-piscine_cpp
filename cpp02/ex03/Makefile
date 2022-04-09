NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp	\
				Fixed.cpp	\
				Point.cpp	\
				bsp.cpp

OBJS		=	$(SRCS:.cpp=.o)


all:		$(NAME)

.cpp.o:
			$(CPP) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf a.out

re:			fclean all

.PHONY:		all clean fclean re
