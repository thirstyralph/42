/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:22:27 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/08 01:42:46 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	turk(t_stack *a, t_stack *b)
{
	t_cost	costs;
	t_mov	instructions;

	while (a->top > 3)
		push(a, b);
	while (b->top > 0)
	{
		costs = calculate_targets(*a, *b);
		calculate_cost(*a, &costs);
		
		perform(a, b, instructions);
		
	}
}
