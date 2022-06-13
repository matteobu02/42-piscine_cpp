NAME		=	goldenpages

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 

SRCS		=	main.cpp	\
				Contact.cpp	\
				PhoneBook.cpp

OBJS		=	$(SRCS:.cpp=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
