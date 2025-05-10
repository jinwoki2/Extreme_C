SRCS	=	test_animal.c \
			test_cat.c \
			test_duck.c \
			test_main.c

OBJS	=	$(SRCS:.c=.o)

CC	=	cc
CFLAGS 	= 	-Wall -Wextra -Werror -I. -g -gdwarf-4
NAME	=	test.out

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
