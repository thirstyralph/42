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

#include "../push_swap.h"

void	_swap(t_stack *stack)
{
	int	tmp;
	int	top;

	top = stack->top;
	tmp = stack->arr[top];
	stack->arr[top] = stack->arr[top - 1];
	stack->arr[top - 1] = tmp;
}

void	_rotate(t_stack *stack)
{
	int	tmp;

	if (stack->top > 0)
	{
		tmp = stack->arr[stack->top];
		ft_memmove(&stack->arr[1], &stack->arr[0], stack->top * sizeof(int));
		stack->arr[0] = tmp;
	}
}

void	_reverse_rotate(t_stack *stack)
{
	int	tmp;

	if (stack->top > 0)
	{
		tmp = stack->arr[0];
		ft_memmove(&stack->arr[0], &stack->arr[1], stack->top * sizeof(int));
		stack->arr[stack->top] = tmp;
	}
}

void	_push(t_stack *target, t_stack *source)
{
	if (target->top < target->max_size && source->top >= 0)
	{
		target->top++;
		target->arr[target->top] = source->arr[source->top];
		source->top--;
	}
	else
		return ;
}
