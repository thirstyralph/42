/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:51:14 by ranavarr          #+#    #+#             */
/*   Updated: 2025/04/07 22:33:10 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long int n)
{
	unsigned long int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(unsigned int n, char *chars)
{
	int		len;
	char	*buffer;
	int		i;

	len = ft_hex_len(n);
	i = len - 1;
	buffer = ft_calloc(sizeof(char), (len + 1));
	if (!buffer)
		return (0);
	while (i >= 0)
	{
		buffer[i] = chars[n % 16];
		n /= 16;
		i--;
	}
	ft_print_str(buffer);
	free(buffer);
	buffer = NULL;
	return (len);
}
/*
int	main(void)
{
	int		i = -100;

	// hex_len test
	while (i <= 300)
	{
		printf("value = %i || len = %i   ", i, ft_hex_len(i));
		i += 10;
	}
	i = 0;
	while (i <= 100)
	{
		ft_print_hex(i, "0123456789abcdef");
		ft_putchar(' ');
		i += 1;
	}
	printf("valores negativos?? = %x \n", 100);
	return (i);
}
*/
