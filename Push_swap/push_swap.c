#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

// for testing purposes.
void	print_stack(t_stack stackA, t_stack stackB)
{
	int	i;

	i = stackA.top;
	while (i >= 0)
	{
		ft_printf("%d pos: %d || %d pos %d\n",stackA.arr[i], 
				i, stackB.arr[i], i);
		i--;
	}
}

int	main(void)
{
	t_stack	sa;
	t_stack	sb;

	print_stack(sa, sb);
	return (0);
}
