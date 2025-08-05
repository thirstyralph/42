/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:12:19 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 04:53:09 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	cost(t_stack a, t_stack b, int ta, int tb)
{
	int	middle_a;
	int	middle_b;
	int	cost_a;
	int	cost_b;
	int	cost_total;

	middle_a = middle(a.top);
	middle_b = middle(b.top);
	cost_a = single_cost(ta, a.top, middle_a);
	cost_b = single_cost(tb, b.top, middle_b);
	if (ta > middle_a && tb > middle_b || ta < middle_a && tb < middle_b)
	{
		if (cost_a < cost_b)
			cost_total = cost_b - cost_a;
		else if (cost_b < cost_a)
			cost_total = cost_a - cost_b;
		else
			cost_total = cost_b;
	}
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}
