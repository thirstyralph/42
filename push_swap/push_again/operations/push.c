/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:40 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 19:07:51 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	fill(t_stack *target, int n)
{
	target->top++;
	target->arr[target->top] = n;
}

char	push(t_stack *target, t_stack *src)
{
	target->top++;
	target->arr[target->top] = src->arr[src->top];
	src->top--;
	return (OP_PUSH + target->id);
}
