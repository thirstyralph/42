#include "./../push_swap.h"
#include <limits.h>
#include <stdio.h>

void	exit_safely_parse(t_stack *a)
{
	ft_printf("ERROR \n");
	if (a && a->arr)
		free(a->rr);
	exit(1);
}

void	exit_safely(t_stack *a, t_stack *b)
{
	ft_printf("ERROR \n");
	if (a && a->arr)
		free(a->arr);
	if (b && b->arr)
		free(b->arr);
	exit(1);
}
