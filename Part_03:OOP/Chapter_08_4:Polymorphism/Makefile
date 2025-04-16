SRCS	=	EC_8_4_8_22_animal.c \
			EC_8_4_8_24_cat.c \
			EC_8_4_8_26_duck.c \
			EC_8_4_8_27_main.c

OBJS	=	$(SRCS:.c=.o)

CC	=	cc
CFLAGS 	= 	-Wall -Wextra -Werror -I. -g -gdwarf-4
NAME	=	8_4.out

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
