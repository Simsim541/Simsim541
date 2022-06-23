NAME		= so_long
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= so_long.c 								\
			  image.c 									\
			  key.c 									\
			  map.c 									\
			  ./so_long_utl/check_everything.c			\
			  ./so_long_utl/ft_strdup_without_newline.c	\
			  ./so_Long_utl/ft_strjoin_without_newline.c\
			  ./so_long_utl/lose_game.c					\
			  ./so_long_utl/print_error.c				\
			  ./so_long_utl/print.c						\
			  ./so_long_utl/put_image.c					\
			  ./so_Long_utl/win_game.c					\
			  ./gnl/get_next_line.c 					\
			  ./gnl/get_next_line_utils.c 				\
			  ./libft/ft_bzero.c						\
			  ./Libft/ft_calloc.c						\
			  ./Libft/ft_itoa.c							\
			  ./Libft/ft_memset.c						\
			  ./Libft/ft_substring.c					\


OBJS		= $(SRCS:%.c=%.o)

LIBC		= ar rc

FLAGS		= -Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		make all -C $(LIBFT)/
		gcc -o $(NAME) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit	
%.o			:	%.c
		gcc $(FLAGS) -c $^ -I./ -o $@


clean		:
		rm -f $(OBJS)
		make clean -C $(LIBFT)

fclean		:	clean
		rm -f $(NAME)
		rm -f $(LIBFT_LIB)
		make fclean -C $(LIBFT)

re			:	fclean all