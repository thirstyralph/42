/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:55:28 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/30 19:55:51 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

// for testing purposes.
void	print_stack(t_stack stackA, t_stack stackB)
{
	int	i;

	ft_printf("stack A || Stack B\n");
	if (stackA.top > stackB.top)
		i = stackA.top;
	else
		i = stackB.top;
	while (i >= 0)
	{
		ft_printf("%d...... || %d ... | pos %d\n",stackA.arr[i],
			stackB.arr[i], i);
		i--;
	}
}

int	main(void)
{
	t_stack	sa;
	t_stack	sb;

	sa.name = 'a';
	sb.name = 'b';
	sa.top = -1;
	sb.top = -1;
	// probando fill
	ft_printf("fill\n");
	fill(&sb, -9);
	fill(&sb, -4);
	fill(&sa, 6);
	fill(&sa, 2);
	print_stack(sa, sb);
	//probando push
	ft_printf("push\n");
	push(&sa, &sb);
	push(&sb, &sa);
	print_stack(sa, sb);
	//probando rotate
	ft_printf("rotate\n");
	rotate (&sa);
	rotate (&sb);
	print_stack(sa, sb);
	//probando reverse rotate
	ft_printf("reverse_rotate\n");
	reverse_rotate (&sa);
	reverse_rotate (&sb);
	print_stack(sa, sb);
	// probando swap
	ft_printf("swap\n");
	swap(&sa);
	swap(&sb);
	print_stack(sa, sb);
	// probando las comprobaciones
	ft_printf("size INT_MAX + 1 = %d\n", size(INT_MAX));
	ft_printf("position of the bigger numbr = %d\n", compare(-9, 8));
	ft_printf("isordered\n");
	//fill(&sa, -1);
	print_stack(sa, sb);
	ft_printf("checking if it is ordered = %d\n", isordered(sa));
	ft_printf("top sa= %d\n", sa.top);
	rotate(&sa);
	print_stack(sa, sb);
	ft_printf("checking if it is ordered = %d\n", isordered(sa));
	ft_printf("biggest\n");
	ft_printf("checking where the biggest vaue is = %d\n", biggest(sa));
	rotate(&sa);
	ft_printf("checking where the biggest vaue is = %d\n", smallest(sa));
	return (0);
}
