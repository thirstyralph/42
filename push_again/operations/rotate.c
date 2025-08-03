/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:47 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/30 19:53:16 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

char	rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[0];
	ft_memmove(&stack->arr[0], &stack->arr[1], sizeof(int) * stack->top - 1);
	stack->arr[stack->top] = temp;
	return (30 + stack->id)
}

char	reverse_rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1], &stack->arr[0], sizeof(int) * stack->top);
	stack->arr[0] = temp;
	return (40 + stack->id)
}
