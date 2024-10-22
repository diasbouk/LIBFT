NAME=dias
CC=cc
CFLAGS= -Wall -Werror -Wextra
SRCS=./*.c
OBJS=./*.o
LIB=libft.a


all: $(NAME)
	$(CC) $(CFLAGS) $(SRCS) 
clean: $(OBJS)
	rm $(OBJS)
fclean: clean
	rm $(LIB)
re: all
