/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan_and_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:32:39 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/28 15:32:41 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	plan_and_move(int pos, t_stack *a, t_stack *b)
{
	t_mov	seq;
	int		target_a;

	target_a = target(*a, b->arr[pos]);
	seq = calculate_movs(a->top, b->top, target_a, pos);
	perform_rotations(a, b, seq);
	push(a, b);
}
