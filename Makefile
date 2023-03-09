NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRCS = ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalnum.c \
		ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_memchr.c \
		ft_memset.c ft_strlcpy.c ft_strrchar.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c \
		ft_strlen.c ft_tolower.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all