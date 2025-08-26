#include "./../push_swap.h"

void	move_all_but_three(t_stack *a, t_stack *b)
{
	while (a->top > 2)
	{
		push(b, a);
	}
//	ft_printf("all but three have been pushed\n");
}

void	turk(t_stack *a, t_stack *b)
{
	int	*cost;

///	ft_printf("turk has started\n");
	move_all_but_three(a, b);
	sort_three(a);
//	ft_printf("a has been sorted \n");
	while (b->top >= 0 )
	{
		cost = calculate_cost(*a, *b);
		int	i = 0;
		while (i <= b->top)
		{
//			ft_printf("pos = %d, cost = %d\n", i, cost[i]);
			i++;
		}
//		ft_printf("wonoblle\n");
//		ft_printf("el menor coste es b[%d]\n", smallest(cost, b->top));
		plan_and_move(smallest(cost, b->top), a, b);
		free(cost);
	}
	while (is_sorted(*a) == 0)
	{
		reverse_rotate(a);
	}
}
