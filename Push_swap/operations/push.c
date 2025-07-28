#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	push(t_stack *stack, int n)
{
	if (isfull(*stack) == 1)
		return ;
	stack->top++;
	stack->arr[stack->top] = n;
}
