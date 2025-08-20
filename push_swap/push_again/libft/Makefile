# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranavarr <ranavarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 18:53:42 by ranavarr          #+#    #+#              #
#    Updated: 2024/12/30 18:56:17 by ranavarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

Sources = ft_isdigit.c\
	ft_isalpha.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_memcmp.c\
	ft_putstr_fd.c\

OBJ = $(Sources:.c=.o)

flags = -Wall -Wextra -Werror

all:$(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(Sources)
	gcc -c $(Sources) -Includes $(flags)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 
