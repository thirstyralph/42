/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 03:32:42 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/07 23:00:08 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	target(t_stack a, int n)
{
	int	i;
	int	target;

	target = 0;
	i = a.top;
	while (i >= 0)
	{
		if (a.arr[i] > i && a.arr[i] < a.arr[target])
			target = i;
		i--;
	}
	return (target);
}

/*
	returns a structure that contains:
	target:	array that contains the target position for the number in its pos
	cost: cost to move it's corresponding positon to the top of a.
	top: position of the highest up value (copied from b.top)
*/
t_cost	calculate_targets(t_stack a, t_stack b)
{
	int		i;
	t_cost	cost;

	cost.target = malloc(sizeof(int) * (b.top + 1));
	if (!cost.target)
		return (cost);
	i = 0;
	cost.top = b.top;
	while (i <= b.top)
	{
		cost.target[i] = target(a, b.arr[i]);
		i++;
	}
	return (cost);
}
