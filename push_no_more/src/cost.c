/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:12:19 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/07 22:14:13 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	optimised_cost(int top_a, int top_b, int target_a, int target_b)
{
	int	middle_a;
	int	middle_b;
	int	cost_a;
	int	cost_b;
	int	cost_total;

	middle_a = median(top_a, target_a);
	middle_b = median(top_b, target_b);
	cost_a = single_cost(target_a, top_a, middle_a);
	cost_b = single_cost(target_b, top_b, middle_b);
	if ((middle_a == 1 && middle_b == 1) || (middle_a == 2 && middle_b == 2))
		cost_total = max(cost_a, cost_b); 
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}

/*
	must take stacks a and b
	must return a cost array.
*/
int	*calculate_cost(t_stack a, t_stack b)
{
	int	i;
	int	*result;
	int	current_target;

	result = malloc(sizeof(int) * (b.top + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i <= b.top)
	{
		current_target = target(a, b.arr[i]);
		result[i] = optimised_cost(a.top, b.top, current_target, i);
		i++;
	}
	return (result);
}
