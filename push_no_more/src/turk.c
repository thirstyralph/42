#include "./../push_swap.h"

void	move_all_but_three(t_stack *a, t_stack *b)
{
	while (a->top > 2)
	{
		push(b, a);
	}
	printf("all but three have been pushed\n");
}

void	turk(t_stack *a, t_stack *b)
{
	int	*cost;

	printf("turk has started\n");
	move_all_but_three(a, b);
	sort_three(a);
	printf("a has been sorted \n");
	while (b->top >= 0 )
	{
		cost = calculate_cost(*a, *b);
		printf("wonoblle\n");
		plan_and_move(smallest(cost, b->top), a, b);
		free(cost);
	}
	while (is_sorted(*a) == 0)
	{
		reverse_rotate(a);
	}
}
