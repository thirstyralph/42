/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:09:43 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 04:02:47 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	is_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.top)
	{
		if (stack.arr[i] < stack.arr[i + 1])
		{
			ft_printf("na, not sorted\n");
			return (0);
		}
		i++;
	}
	return (1);
}
