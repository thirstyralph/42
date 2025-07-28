#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[0];
	ft_memmove(&stack->arr[0], &stack->arr[1], sizeof(int) * stack->top);
	stack->arr[stack->top] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1],
		 &stack->arr[0], sizeof(int) * stack->top);
	stack->arr[0] = temp;
}
