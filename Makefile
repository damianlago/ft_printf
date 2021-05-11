NAME	=	libftprintf.a

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	libft.a

SRC	=	ft_printf.c

OBJS	=	$(SRC:.c=.o)

$(LIBFT):
	cd libft && make

$(NAME): $(OBJS)
	cd ..
	-ar -rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all
