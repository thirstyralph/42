/*
	calculates the necesary actions to move given position of the stack a
	 to the top and writes them into the movement structure accordingly
*/
void	determine_single_ops_a(t_mov *seq, int middle, int top, int pos)
{
	if (middle == 1)
		seq->ra = top = top - pos;
	else if (middle == 2)
		seq->rra = pos + 1;
}

/*
	calculates the necesary actions to move given position of the stack b
	 to the top and writes them into the movement structure accordingly
*/
void	determine_single_ops_b(t_mov *seq, int middle, int top, int pos)
{
	if (middle == 1)
		seq->rb = top = top - pos;
	else if (middle == 2)
		seq->rrb = pos + 1;
}

/*
	given single operations, (ra & rb or rra & rrb), edits the movement 
	structure to reduce the number of operations
*/
void	calculate_single_optimization(int *a, int *b, int *double_op)
{
	if (a == b)
	{
		double_op = a;
		a = 0;
		b = 0;
	}
	else if (a > b)
	{
		double_op = b;
		a = a - b;
		b = 0;
	}
	else if (b > a)
	{
		double_op = a;
		b = b - a;
		b = 0;
	}
}

void	optimise(t_mov *seq)
{
	if (seq->rb != 0 && seq->ra != 0)
		calculate_single_optimization(seq->ra, seq->rb, seq->rr);
	else if (seq->rb != 0 && seq->ra != 0)
		calculate_single_optimization(seq->rra, seq->rrb, seq->rrr);
}

/*
	when given a position in b and  a target postion in a
	it retuns the number of necessary operations needed to 
	move b into a
*/
t_mov	
t_cost	optimised_cost(int top_a, int top_b, int target_a, int target_b)
{
	int	middle_a;
	int	middle_b;
	int	cost_a;
	int	cost_b;
	int	cost_total;

	middle_a = median(top_a, target_a);
	middle_b = median(top_b, target_b);
	cost_a = single_cost(target_a, top_a, middle_a);
	cost_b = single_cost(target_b, top_b, middle_b);
	if (middle_a == 1 && middle_b == 1 )
	{
		
	}
	else if(middle_a == 2 && middle_b == 2)
		cost_total = max(cost_a, cost_b);
	else
		cost_total = cost_b + cost_a;
	return (cost_total);
}
