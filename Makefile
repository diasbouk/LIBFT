NAME=libft.a
CC=cc
CFLAGS=-Wall -Werror -Wextra
SRCS=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmampi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS=ft
BONUS_OBJS= $(BONUS_SRCS:.c=.o)

OBJS = $(SRCS:.c=.o)
RM=rm

PHONY: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs libft.a $(OBJS)
CREAT_OBJS: $(SRCS)
	$(CC)  -c $(CFLAGS) $< -o $@
all: $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)
add: $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
	ar -rs libft.a $(OBJ)

main: $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. libft.a -o main
test: $(FILE)
	$(CC) $(CFLAGS) $(FILE) -L. libft.a -lbsd -o main
