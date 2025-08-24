#include "./../push_swap.h"

void	plan_and_move(int pos, t_stack *a, t_stack *b)
{
	t_mov	seq;
	int		target_a;

	target_a = target(*a, b->arr[pos]);
	ft_printf("(esto viene de plan_and_move) pos = %d number = %d, target = %d, number = %d\n", pos,b->arr[pos], target_a, a->arr[target_a]);
	seq = calculate_movs(a->top, b->top, target_a, pos);
	print_operations(seq);
	perform_rotations(a, b, seq);

	push(a, b);
}

