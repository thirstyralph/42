/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:12:19 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 13:11:18 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	middle(int n)
{
	return ((n / 2) - (n % 2));
}

int	single_cost(int pos, int top, int middle)
{
	if (pos >= middle)
		return (top - pos);
	else
		return (pos++);
}

int	median(t_stack a, int ta)
{
	if (ta >= middle(a.top))
		return (2);
	else
		return (1);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
/*
	when given a position in b and  a target postion in a
	it retuns the number of necessary operations needed to 
	move b into a
*/
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
	if (middle_a == 1 && middle_b == 1 || middle_a == 2 && middle_b == 2)
		cost_total = max(cost_a, cost_b);
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}

/*
	when given a stack and the cost struct, it will calculate the
	cost of moving every b position to its a target and place those
	results in cost.cost
*/
void	calculate_cost(t_stack a, t_cost *cost)
{
	int	i;
	int	*total;

	total = malloc(sizeof(int) * (cost->top + 1));
	if(!total)
		return ;
	i = 0;
	while (i <= cost->top)
	{
		cost->cost[i] = optimised_cost(a.top, cost->top, cost->target[i], i);
		i++;
	}
}
