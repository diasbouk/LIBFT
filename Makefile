NAME=libft.a
CC=cc
CFLAGS=-Wall -Werror -Wextra
SRCS=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmampi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS=ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c
BONUS_OBJS= $(BONUS_SRCS:.c=.o)

OBJS = $(SRCS:.c=.o)
RM=rm

$(NAME): $(OBJS) 
	ar -rcs libft.a $(OBJS)
CREAT_OBJS: $(SRCS)
	$(CC)  -c $(CFLAGS) $< -o $@
all: $(NAME)

clean:
	rm $(OBJS)

fclean:
	rm $(NAME)
add: $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
	ar -rcs libft.a $(OBJ)

bonus: $(BONUS_SRCS)
	$(CC) -c $(CFLAGS) $(BONUS_SRCS)
	ar -rcs $(NAME) $(BONUS_OBJS)

re: fclean all

main: $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. libft.a -o main
test: $(FILE)
	$(CC) $(CFLAGS) $(FILE) -L. libft.a -lbsd -o main
