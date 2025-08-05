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

int	cost(t_stack a, t_stack b, int ta, int tb)
{
	int	middle_a;
	int	middle_b;
	int	cost_a;
	int	cost_b;
	int	cost_total;

	middle_a = median(a, ta);
	middle_b = median(b, tb);
	cost_a = single_cost(ta, a.top, middle_a);
	cost_b = single_cost(tb, b.top, middle_b);
	if (middle_a == 1 && middle_b == 1 || middle_a == 2 && middle_b == 2)
		cost_total = max(cost_a, cost_b);
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}
