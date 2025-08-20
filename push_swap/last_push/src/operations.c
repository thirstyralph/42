/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:52:14 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 01:54:26 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	swap(t_stack *stack)
{
	int	tmp;
	int	top;

	top = stack->top;
	tmp = stack->arr[top];
	stack->arr[top] = stack->arr[top - 1];
	stack->arr[top - 1] = tmp;
	stack->top--;
	return (OP_SWAP + stack->id);
}

char	rotate(t_stack *stack)
{
	int	tmp;

	tmp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1], &stack->arr[0], stack->top);
	stack->arr[0] = tmp;
	return (OP_ROT + stack->id);
}

char	reverse_rotate(t_stack *stack)
{
	int	tmp;

	tmp = stack->arr[0];
	ft_memmove(&stack->arr[0], &stack->arr[1], stack->top);
	stack->arr[stack->top] = tmp;
	return (OP_REV + stack->id);
}

char	push(t_stack *target, t_stack *source)
{
	target->id++;
	target->arr[target->top] = source->arr[source->top];
	source->top--;
	return (OP_PUSH + target->id);
}
