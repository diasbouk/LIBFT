NAME=dias
CC=cc
CFLAGS= -Wall -Werror -Wextra
SRCS=./*.c
OBJS=$(SRCS:.c=.o)
LIB=libft.a
MAIN=tests/test_lstadd_front.c

OBJ:=$(SRC:.c=.o)

all:
	$(CC) -c $(CFLAGS) $(SRCS)
	ar -rcs libft.a $(OBJS)

add: $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
	ar -rs libft.a $(OBJ)

main: $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. libft.a -o main
test: $(FILE)
	$(CC) $(CFLAGS) $(FILE) -L. libft.a -lbsd -o main

clean:
	rm *.o
	rm main
