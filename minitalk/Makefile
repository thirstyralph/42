SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

server: server.o libft ft_printf
	$(CC) -o $@ $< -Llibft -Lft_printf -lft -lftprintf

client: client.o libft ft_printf
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
	rm -f server client libft/libft.a ft_printf/ft_printf.a

re: fclean all

.PHONY: all libft clean fclean re
