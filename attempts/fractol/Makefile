# ---------------- Configuración ----------------
NAME      = fract-ol
CC        = cc
RM        = rm -rf

# Flags de compilación y preprocesador
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS	= -I. -Iinclude -Iminilibx-linux

LIBFTPATH	= include/libft
LIBFTLIB	= $(LIBFTPATH)/libft.a

# MiniLibX (Linux)
MLXPATH	= minilibx-linux
MLXLIB	= $(MLXPATH)/libmlx_Linux.a

# Enlazado
LDFLAGS   = 
LDLIBS    = -lXext -lX11 -lm -lz

# Fuentes y objetos
SRCS	= $(wildcard src/*.c)
OBJS	= $(SRCS:src/%.c=obj/%.o)
DEPS	= $(OBJS:.o=.d)

# ---------------- Targets ----------------
all: $(NAME)

# Crear ejecutable
$(NAME): $(MLXLIB) $(LIBFTLIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(MLXLIB) $(LIBFTLIB) $(LDLIBS) -o $@
	@echo "\nfract-ol compiled\n"

$(LIBFTLIB):
	$(MAKE) -C $(LIBFTPATH)

# Compilar MiniLibX primero
$(MLXLIB):
	$(MAKE) -C $(MLXPATH)

# Carpeta de objetos
obj:
	mkdir -p obj

# Compilación de objetos (con headers)
obj/%.o: src/%.c | obj
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

# Dependencias automáticas
-include $(DEPS)

# Limpiar objetos
clean:
	$(RM) obj
	$(MAKE) -C $(MLXPATH) clean

# Limpiar todo
fclean: clean
	$(RM) $(NAME)

# Reconstrucción completa
re: fclean all

.PHONY: all clean fclean re

