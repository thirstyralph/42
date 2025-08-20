/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:47 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 19:00:22 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

char	rotate(t_stack *stack)
{
	int	temp;

	temp = stack->arr[0];
	ft_memmove(&stack->arr[0], &stack->arr[1], sizeof(int) * stack->top - 1);
	stack->arr[stack->top] = temp;
	return (OP_ROT + stack->id);
}

char	reverse_rotate(t_stack *stack)
{
	int	temp;

	temp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1], &stack->arr[0], sizeof(int) * stack->top);
	stack->arr[0] = temp;
	return (OP_REV + stack->id);
}
