# Variables
NAME = server
NAME_C = client

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_PATH = libft
FTPRINTF_PATH = ft_printf

LIBFT_A = $(LIBFT_PATH)/libft.a
FTPRINTF_A = $(FTPRINTF_PATH)/libftprintf.a

SRC_SERVER =server.c
SRC_CLIENT =client.c

# Targets
all: $(LIBFT_A) $(FTPRINTF_A) $(NAME) $(NAME_C)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_PATH)

$(FTPRINTF_A):
	@$(MAKE) -C $(FTPRINTF_PATH)

$(NAME): $(SRC_SERVER) $(LIBFT_A) $(FTPRINTF_A)
	@cc $(CFLAGS) -o $@ $^
	@echo "\n Server executable created \n"

$(NAME_C): $(SRC_CLIENT) $(LIBFT_A) $(FTPRINTF_A)
	@cc $(CFLAGS) -o $@ $^
	@echo "\n Client executable created \n"

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean
	@$(MAKE) -C $(FTPRINTF_PATH) clean

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@$(MAKE) -C $(FTPRINTF_PATH) fclean
	@$(RM) $(NAME) $(NAME_C)

re: fclean all

.PHONY: all clean fclean re

