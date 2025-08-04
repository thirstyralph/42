#include "push_swap.h"

char	*sort(t_stack *a, t_stack *b)
{
	char	*row;

	if (a.top == 1)
		append(&row, sort_two(a));
	else if (a.top == 2)
		append(&row, sort_three(a));
	else
		append(&row, turk(a, b))
	return (row);
}
