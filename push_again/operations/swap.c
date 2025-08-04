/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:54 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/30 19:54:00 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

char	swap(t_stack *stack)
{
	int	temp;

	if (stack->top < 1)
		return ;
	temp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top - 1];
	stack->arr[stack->top - 1] = temp;
	return (20 + stack->id);
}
