#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

int	isfull(t_stack stack)
{
	if (stack.top >= MAX_SIZE)
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

	i = stack.top;
	while (i >= 0)
	{
		prev = stack.arr[i];
		i--;
		if (prev >= stack.arr[i])
			return (0);
	}
	return (1);
}
