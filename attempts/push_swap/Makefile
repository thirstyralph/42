SOURCES = *.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: push_swap 

push_swap: push_swap.o libft ft_printf
	$(CC) -o $@ $< -Llibft -Lft_printf -lft -lftprintf


%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft

ft_printf:
	make -C ft_printf

clean:
	rm -f $(OBJECTS)
	make -C libft clean
	
fclean: clean
	rm -f push_swap libft/libft.a ft_printf/ft_printf.a

re: fclean all

.PHONY: all libft clean fclean re
