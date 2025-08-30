/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:02:29 by ranavarr          #+#    #+#             */
/*   Updated: 2025/04/07 22:32:27 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

//	printers
int				ft_printf(char const *str, ...);
int				ft_putchar(char c);
int				ft_print_str(char *str);
int				ft_print_percent(void);
int				ft_print_hex(unsigned int n, char *chars);
int				ft_print_dec(int n);
int				ft_print_unsigned(unsigned int n);
int				ft_print_ptr(unsigned long int ptr);

//	utils
int				ft_int_len(int i);
char			*ft_itoa(int n, char *str);
char			*ft_uitoa(unsigned int n, char *str);
int				ft_unsigned_len(unsigned int s);
int				ft_hex_len(unsigned long int n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memset(void *s, int c, size_t n);

#endif
