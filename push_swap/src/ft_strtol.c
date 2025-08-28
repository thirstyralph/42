/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:47:06 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/28 17:40:58 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_strtol(char *str)
{
	int		i;
	long	sign;
	int		mult;
	long	r;

	r = 0;
	mult = 1;
	sign = 1;
	if (str[0] == '-')
	{
		str++;
		sign = -1;
	}
	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (ft_isdigit(str[i]))
		{
			r = r + (mult * (str[i] - '0'));
		}
		else
			return (0);
		mult = mult * 10;
	}
	return (r * sign);
}
