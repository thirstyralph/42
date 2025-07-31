#                                VARIABLES                                    #

NAME        = push_swap

CC          = gcc
CFLAGS      = -Wall -Wextra -Werror -I. -Ilibft -Ift_printf

#                                SOURCES                                      #

SRC_DIR     = .
OP_DIR      = operations

SRC_FILES   =  target_sort.c tiny_sort.c push_swap.c parsing.c stack_check.c stack_compare.c \
              $(OP_DIR)/push.c $(OP_DIR)/rotate.c $(OP_DIR)/swap.c

OBJ_FILES   = $(SRC_FILES:.c=.o)

LIBFT_DIR   = libft
PRINTF_DIR  = ft_printf
LIBFT       = $(LIBFT_DIR)/libft.a
PRINTF      = $(PRINTF_DIR)/libftprintf.a

#                                RULES                                        #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

clean:
	rm -f $(OBJ_FILES)
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)

re: fclean all

