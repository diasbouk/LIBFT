NAME=dias
CC=cc
CFLAGS= -Wall -Werror -Wextra
SRCS=./*.c
OBJS=$(SRCS:.c=.o)
LIB=libft.a
MAIN=tests/test_lstadd_front.c

OBJ:=$(ARGS:.c=.o)

add: $(ARGS)
	$(CC) -c $(CFLAGS) $(ARGS)
	ar -rs libft.a $(OBJ)

main: $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. libft.a -o main

clean:
	rm *.o
	rm main
