/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:14:19 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/30 19:22:17 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
/*
 * finds the number closest but still bigger than a given number
 */
int	closest(t_stack a, int number)
{
	int	min;
	int	i;

	i = 0;
	min = INT_MAX;
	while (i <= a.top)
	{
		if (a.arr[i] < min && a.arr[i] > number)
			min = a.arr[i];
		i++;
	}
	return (min);
}

int	target(t_stack a, int number)
{
	int	i;
	int	target_num;

	i = 0;
	target_num = closest(a, number);
	while (i < a.top)
	{
		if (a.arr[i] == target_num)
			return (i);
		i++;
	}
}

int	cost(t_stack a, int pos);
{
	int	middle;

	middle = (a.top / 2) + (a.top % 2);
}
/*
int	target(t_stack a, int number)
{
	int	i;
	int	big;
	int	pos;

	i = 0;
	big = biggest(a);
	if (number < a.arr[smallest(a)])
		pos = smallest(a);
	else if (number > big)
	{
		if (big == 0)
			pos = a.top;
		else
			rge
			pos = big - 1;
	}
	else
	{
	}
	return (pos);
	return (pos);
	return (pos);
	return (pos);
	return (pos);
	return (pos);
	return (pos);
}

void	target_sort(t_stack sa, t_stack sb)
{
}
*/
