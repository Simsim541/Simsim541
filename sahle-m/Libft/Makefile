
NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_memset.c		\
		ft_strlen.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_bzero.c		\
		ft_itoa.c		\
		ft_substring.c	\

OBJECTS = $(SRC:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean
