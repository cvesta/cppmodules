NAME = replace

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

REMOVE = rm -rf

all: $(NAME)

$(NAME):	$(OBJS)
			$(COMPILE) $(FLAGS) $(OBJS) -I. -o $(NAME)

clean:
		$(REMOVE) $(OBJS)

fclean:	clean
		$(REMOVE) $(NAME)
		$(REMOVE) *.replace

re: fclean all

.PHONY:		all clean fclean re

