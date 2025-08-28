/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:32:14 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/28 15:32:15 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

/*
	calculates the necesary actions to move given position of the stack a
	to the top and writes them into the movement structure accordingly
	t_mo *seq: pointer to the sequence array.
	int middle: median of the stack tha where our target is located
				1 = below the median
				2 = above the median
	top: top value of the stack
	pos: position of the number we want to move to the top
*/
void	determine_single_ops_a(t_mov *seq, int middle, int top, int pos)
{
	if (middle == 2)
		seq->ra = top - pos;
	else if (middle == 1)
		seq->rra = pos + 1;
}

/*
	calculates the necesary actions to move given position of the stack b
	 to the top and writes them into the movement structure accordingly
	t_mov *seq: pointer to the sequence array.
	int middle: median of the stack tha where our target is located
				1 = below the median
				2 = above the median
	top: top value of the stack
	pwos: position of the number we want to move to the top
*/
void	determine_single_ops_b(t_mov *seq, int middle, int top, int pos)
{
	if (middle == 2)
		seq->rb = top - pos;
	else if (middle == 1)
		seq->rrb = pos + 1;
}

/*
	given single operations, (ra & rb or rra & rrb), edits the movement 
	structure to reduce the number of operations
*/
void	calculate_single_optimization(int *a, int *b, int *double_op)
{
	if (*a == *b)
	{
		*double_op = *a;
		*a = 0;
		*b = 0;
	}
	else if (*a > *b)
	{
		*double_op = *b;
		*a = *a - *b;
		*b = 0;
	}
	else if (*b > *a)
	{
		*double_op = *a;
		*b = *b - *a;
		*a = 0;
	}
}

void	optimise(t_mov *seq)
{
	if (seq->rb != 0 && seq->ra != 0)
		calculate_single_optimization(&seq->ra, &seq->rb, &seq->rr);
	else if (seq->rrb != 0 && seq->rra != 0)
		calculate_single_optimization(&seq->rra, &seq->rrb, &seq->rrr);
}

/*
	when given a position in b and  a target postion in a
	it retuns the number of necessary operations needed to 
	move b into a
void	determine_single_ops_b(t_mov *seq, int middle, int top, int pos)
*/
t_mov	calculate_movs(int top_a, int top_b, int target_a, int target_b)
{
	t_mov	seq;
	int		middle_a;
	int		middle_b;

	seq.ra = 0;
	seq.rra = 0;
	seq.rb = 0;
	seq.rrb = 0;
	seq.rrr = 0;
	seq.rr = 0;
	middle_a = median(top_a, target_a);
	middle_b = median(top_b, target_b);
	determine_single_ops_a(&seq, middle_a, top_a, target_a);
	determine_single_ops_b(&seq, middle_b, top_b, target_b);
	optimise(&seq);
	return (seq);
}
