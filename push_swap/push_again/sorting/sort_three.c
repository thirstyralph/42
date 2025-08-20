/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:08:57 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 18:17:52 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

int	biggest(t_stack stack)
{
	int	pos_big;
	int	big;
	int	i;

	i = 0;
	big = INT_MIN;
	while (i <= stack.top)
	{
		if (stack.arr[i] > big)
		{
			big = stack.arr[i];
			pos_big = i;
		}
		i++;
	}
	return (pos_big);
}

int	smallest(t_stack stack)
{
	int	pos_small;
	int	small;
	int	i;

	i = 0;
	small = INT_MAX;
	while (i <= stack.top)
	{
		if (stack.arr[i] < small)
		{
			small = stack.arr[i];
			pos_small = i;
		}
		i++;
	}
	return (pos_small);
}

void	sort_three(t_stack *stack)
{
	int	big;
	int	small;

	big = biggest(*stack);
	while (isordered(*stack) == 0)
	{
		if (big == 2)
			rotate(stack);
		else if (big == 1)
			reverse_rotate(stack);
		small = smallest(*stack);
		if (small == 0)
			reverse_rotate(stack);
		else if (small == 2)
			swap(stack);
	}
}
