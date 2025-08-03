CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
NAME		= fractol
OBJS		= $(SRCS:.c=.o) $(LIBFT_SRCS:.c=.o)
SRC_DIR		=.
LIBFT_DIR	= libft
SRCS		=$(wildcard $(SRC_DIR)/*.c)
LIBFT_SRCS	=$(wildcard $(LIBFT_DIR)/*.c)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(OBJS)
re: fclean all

.PHONY: clean fclean re
