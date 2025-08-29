NAME		:= Game
CFLAGS		:= 
LIBMLX		:= ./lib/MLX42

LIBLIBFT := ./lib/libft/libft.a
HEADERS		:= -I ./include -I $(LIBMLX)/include
LIBS		:= $(LIBMLX)/build/libmlx42.a -ldl -lglfw -pthread -lm
SRCS		:= $(shell find ./src -iname "*.c")
OBJS		:= ${SRCS:.c=.o}

all: libft ft_printf libmlx $(NAME)

libmlx:
		@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4
libft:
		make -C ./lib/libft

ft_printf:
		make -C ./lib/ft_printf

%.o: %.c
		@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)"

$(NAME): $(OBJS)
		@$(CC) $(OBJS) $(LIBS) $(LIBLIBFT) $(HEADERS) -o $(NAME)

clean:
		@rm -rf $(OBJS)
			@rm -rf $(LIBMLX)/build

fclean: clean
		@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, libmlx
