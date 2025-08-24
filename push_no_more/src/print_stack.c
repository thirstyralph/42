#include "../push_swap.h"

void	print_stacks(t_stack a, t_stack b)
{
	int	max;

	if (a.top > b.top)
		max = a.top;
	else
		max = b.top;
	ft_printf("AAAAAAAABBBBBBBB\n");
	while (max >= 0)
	{
		if (max <= a.top)
			ft_printf("==%d== ", a.arr[max]);
		if(max <= b.top)
			ft_printf("==%d==", b.arr[max]);
		ft_printf("\n");
		max--;
	}
}

void	print_operations(t_mov m)
{
	printf("ra = %d\n rra = %d\n rb = %d\n rrb = %d\n 	rrr = %d\n rr = %d\n", m.ra, m.rra, m.rb, m.rrb, m.rrr, m.rr);
}
