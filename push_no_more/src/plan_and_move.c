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
