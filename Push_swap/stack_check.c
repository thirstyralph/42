#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

int	isfull(t_stack stack)
{
	if (stack.top >= MAX_SIZE - 1)
		return (1);
	else
		return (0);
}

int	isempty(t_stack stack)
{
	if (stack.top == -1)
		return (1);
	else
		return (0);
}

int	isordered(t_stack stack)
{
	int	i;
	int	prev;

	i = 1;
	prev = stack.arr[0];
	while (i < stack.top)
	{
		if (prev >= stack.arr[i])
			return (0);
		i++;
	}
	return (1);
}
