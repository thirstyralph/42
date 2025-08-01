/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:40 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 18:53:27 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	fill(t_stack *target, int n, int argc)
{
	if (isfull(*target, argc) == 1)
		return ;
	target->top++;
	target->arr[target->top] = n;
}

void	dump(int *tab, int len, t_stack *a)
{
	int	i;

	i = 1;
	while (i < len)
	{
		fill(a, tab[i++]);
	}
}

void	push(t_stack *target, t_stack *src)
{
	if (isfull(*target) == 1)
		return ;
	else if (isempty(*src) == 1)
		return ;
	target->top++;
	target->arr[target->top] = src->arr[src->top];
	src->top--;
	ft_printf("p%c\n", target->name);
}
