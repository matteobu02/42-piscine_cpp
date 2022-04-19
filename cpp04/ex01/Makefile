NAME		=	test

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I $(INCLUDES)

INCLUDES	=	./includes

SRCS		=	srcs/main.cpp			\
				srcs/Animal.cpp			\
				srcs/Cat.cpp			\
				srcs/Dog.cpp			\
				srcs/WrongAnimal.cpp	\
				srcs/WrongCat.cpp		\
				srcs/Brain.cpp

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
