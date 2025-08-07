/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 01:35:03 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/08 01:41:31 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include "./../push_swap.h"

int	smallest(int *tab, int top)
{
	int	i;
	int	min;
	int	min_pos;

	i = 0;
	min = INT_MAX;
	min_pos = -1;
	while (i <= top)
	{
		if (tab[i] < top)
		{
			min = tab[i];
			min_pos = i;
		}
		i++;
	}
	return (min_pos);
}

/*
void	loop_rrr(t_stack *a, t_stack *b, int laps)
{
	int	i;

	i = 0;
	while (i < laps)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		i++;
	}
}

void	loop_rr(t_stack *a, t_stack *b, int laps)
{
	int	i;

	i = 0;
	while (i < laps)
	{
		rotate(a);
		rotate(b);
		i++;
	}
}

int	calculate_movements(int top_a, int top_b, int target_a, int target_b)
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
	if (middle_a == 1 && middle_b == 1)
	{
		cost_total = max(cost_a, cost_b);
	}
	else if (middle_a == 2 && middle_b == 2)
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}
*/

void	do_rotation(t_stack *a, t_stack *b, t_mov movs)
{
	int	i;

	i = 0;
	while (i < movs.ra)
	{
		rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.rb)
	{
		rotate(b);
		i++;
	}
	i = 0;
	while (i < movs.rr)
	{
		rotate(a);
		rotate(b);
		i++;
	}
}

void	do_reverse_rotation(t_stack *a, t_stack *b, t_mov movs)
{
	int	i;

	i = 0;
	while (i < movs.rra)
	{
		reverse_rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.rra)
	{
		reverse_rotate(b);
		i++;
	}
	i = 0;
	while (i < movs.rra)
	{
		reverse_rotate(b);
		reverse_rotate(a);
		i++;
	}
}

void	perform(t_stack *a, t_stack *b, t_mov movs)
{
	do_rotation(a, b, movs);
	do_reverse_rotation(a, b, movs);
	push(a, b);
}

/*
	i = 0;
	while (i < movs.ra)
	{
		rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.ra)
	{
		rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.ra)
	{
		rotate(a);
		i++;
	}
}d
*/
