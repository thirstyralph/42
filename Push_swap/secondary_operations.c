/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondary_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:19:45 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/25 16:20:01 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1],
		&stack->arr[0], sizeof(int) * stack->top);
	stack->arr[0] = temp;
}
