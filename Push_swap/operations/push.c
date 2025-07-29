#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	fill(t_stack *target, int n)
{
	if (isfull(*target) == 1)
		return ;
	target->top++;
	target->arr[target->top] = n;
}

void	push(t_stack *target, t_stack *src)
{
	if (isfull(*target) == 1)
		return ;
	else if (isempty(*src) == 1)
		return ;
	target->top++;
	target->arr[target->top] = src->arr[src->top];
	src->top--;
}
