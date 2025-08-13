#include "./../push_swap.h"

void	move_all_but_three(t_stack *a, t_stack *b)
{
	while (a->top > 3)
		push(b, a);
}

void	turk(t_stack *a, t_stack *b)
{
	move_all_but_three(a, b);
	while (b->top >= 0 )
	{
		plan_and_move(smallest(calculate_cost(*a, *b), b->top), a, b);
	}
}
