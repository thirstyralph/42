NAME        := fract-ol
CC          := cc
# CFLAGS      := -Wall -Wextra -Werror -g -Iinclude
CFLAGS      :=  -g -Iinclude -I$(MLX_DIR)
MLXFLAGS    := -L$(MLX_DIR)  -lmlx_Linux -lXext -lX11 -lm -lz

SRC_DIR     := src
OBJ_DIR     := obj

FT_PRINTF_DIR   := include/ft_printf
FT_PRINTF_LIB   := $(FT_PRINTF_DIR)/libftprintf.a

LIBFT_DIR       := include/libft
LIBFT_LIB       := $(LIBFT_DIR)/libft.a

MLX_DIR			:= include/minilibx_linux
MLX_LIB			:= $(MLX_LIB)/libmlx_Linux.a

SRCS    := $(wildcard $(SRC_DIR)/*.c)
OBJS    := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

# Create obj/ if it doesn’t exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Rule for .o files (stored in obj/)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build final executable
$(NAME): $(OBJS) $(FT_PRINTF_LIB) $(LIBFT_LIB) $(MLX_LIB)
	$(CC) $(OBJS) $(FT_PRINTF_LIB) $(LIBFT_LIB) $(MLX_LIB) $(MLXFLAGS) -o $(NAME)

# Build ft_printf and libft if needed
$(MLX_LIB):
	$(MAKE) -C $(MLX_DIR)

$(FT_PRINTF_LIB):
	$(MAKE) -C $(FT_PRINTF_DIR)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(MLX_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(MLX_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

