#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void sort_two(t_stack a)
{
	if (is_sorted(a) == 0)
		rotate(*a);
}
