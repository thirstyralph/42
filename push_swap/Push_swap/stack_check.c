/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:59:34 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 18:42:13 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

int	isfull(t_stack stack, int len)
{
	if (stack.top >= len)
		return (1);
	else
		return (0);
}

int	isempty(t_stack stack)
{
	if (stack.top == -1)
		return (1);
	else
		return (0);
}

int	isordered(t_stack stack)
{
	int	i;
	int	prev;

	i = stack.top;
	while (i >= 0)
	{
		prev = stack.arr[i];
		i--;
		if (prev >= stack.arr[i])
			return (0);
	}
	return (1);
}
