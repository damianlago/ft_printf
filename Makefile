NAME	=	libftprintf.a

CC	=	gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT_OBJS	=	libft/*.o

SRC	=	src/ft_printf.c src/ft_initialise.c src/ft_eval_format.c src/ft_is_char.c src/ft_is_int.c

OBJS	=	$(SRC:.c=.o)

AR	=	ar rcs

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJS) LIBFT_OBJS
	$(AR) $(NAME) $(OBJS) $(LIBFT_OBJS)
	ranlib $(NAME)

LIBFT_OBJS:
	make -C libft

clean:
	make -C libft fclean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
