#include "./../push_swap.h"

int	smallest(int *tab, int top)
{
	int	i;
	int	min;
	int	min_pos;

	i = 0;
	min = INT_MAX;
	min_pos = -1;

	while (i <= top)
	{
		if (tab[i] < top)
		{
			min = tab[i];
			min_pos = i;
		}
		i++;
	}
	return (min_pos);
}

void	loop_rrr(t_stack *a, t_stack *b, int laps)
{
	int	i;

	i = 0;
	while (i < laps)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		i++;
	}
}

void	loop_rr(t_stack *a, t_stack *b, int laps)
{
	int	i;

	i = 0;
	while (i < laps)
	{
		rotate(a);
		rotate(b);
		i++;
	}
}

int	calculate_movements(int top_a, int top_b, int target_a, int target_b)
{
	int	middle_a;
	int	middle_b;
	int	cost_a;
	int	cost_b;
	int	cost_total;
	int	i;

	i = 0;
	middle_a = median(top_a, target_a);
	middle_b = median(top_b, target_b);
	cost_a = single_cost(target_a, top_a, middle_a);
	cost_b = single_cost(target_b, top_b, middle_b);
	if (middle_a == 1 && middle_b == 1)
	{
		cost_total = max(cost_a, cost_b);
	}
	else if(middle_a == 2 && middle_b == 2)
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}


