NAME        := push_swap
CC          := cc
CFLAGS      := -Wall -Wextra -Werror -g -Iinclude
SRC_DIR     := src
OBJ_DIR     := obj

FT_PRINTF_DIR := include/ft_printf
FT_PRINTF_LIB := $(FT_PRINTF_DIR)/libftprintf.a
LIBFT_DIR := include/libft
LIBFT_LIB := $(LIBFT_DIR)/libft.a

SRCS        := $(wildcard $(SRC_DIR)/*.c)
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Default target
all: $(NAME)

# Link only if object files changed
$(NAME): $(OBJS) $(FT_PRINTF_LIB) $(LIBFT_LIB)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(FT_PRINTF_LIB) $(LIBFT_LIB)

# Compile only modified files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build ft_printf
$(FT_PRINTF_LIB):
	$(MAKE) -C $(FT_PRINTF_DIR)

# Build libft
$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

# Remove compiled files
clean:
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

# Clean + recompile
re: fclean all

.PHONY: all clean fclean re

