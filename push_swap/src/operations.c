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

void	swap(t_stack *stack)
{
	_swap(stack);
	ft_printf("s%c\n", stack->name);
}

void	rotate(t_stack *stack)
{
	_rotate(stack);
	ft_printf("r%c\n", stack->name);
}

void	reverse_rotate(t_stack *stack)
{
	_reverse_rotate(stack);
	ft_printf("rr%c\n", stack->name);
}

void	push(t_stack *target, t_stack *source)
{
	_push(target, source);
	ft_printf("p%c\n", target->name);
}
