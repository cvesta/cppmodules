NAME = zombies

COMPILE = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRC:.cpp=.o)

REMOVE = rm -rf

all: $(NAME)

$(NAME):	$(OBJS)
			$(COMPILE) $(FLAGS) $(OBJS) -I. -o $(NAME)

clean:
		$(REMOVE) $(OBJS)

fclean:	clean
		$(REMOVE) $(NAME)

re: fclean all

.PHONY:		all clean fclean re


