#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	swap(t_stack *stack, int n)
{
	int	temp;

	if (stack->top >= 1)
		return ;
	temp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top];
	stack->arr[stack->top] = temp;
}
