/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:32:43 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/28 15:32:46 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	move_all_but_three(t_stack *a, t_stack *b)
{
	while (a->top > 2)
	{
		push(b, a);
	}
}

void	turk(t_stack *a, t_stack *b)
{
	int	*cost;

	move_all_but_three(a, b);
	sort_three(a);
	while (b->top >= 0)
	{
		cost = calculate_cost(*a, *b);
		plan_and_move(smallest(cost, b->top), a, b);
		free(cost);
	}
	while (is_sorted(*a) == 0)
	{
		reverse_rotate(a);
	}
}
