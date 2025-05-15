SRCS	=	animal.c	\
			duck.c		\
			main.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
CFLAGS 	= 	-Wall -Wextra -Werror -I. -g -gdwarf-4
NAME	=	a.out

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
