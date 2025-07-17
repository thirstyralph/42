OURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft 
	$(CC) -o $@ $< -Llibft -lft

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
