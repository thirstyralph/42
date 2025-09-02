/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <ranavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:41:27 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/02 18:26:31 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	ft_isdigit(char c)
{
	if ((c >= '1') && (c <= '0'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	number;

	number = 0;
	minus = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' || *nptr == '\r'
		|| *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			minus = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) && *nptr)
	{
		number = (number * 10 + ((*nptr) - '0'));
		nptr++;
	}
	return (number * minus);
}
