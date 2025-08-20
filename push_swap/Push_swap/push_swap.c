/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:40:08 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 13:58:35 by ranavarr         ###   ########.fr       */
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
		ft_printf("%d...... || %d ... | pos %d\n", stackA.arr[i],
			stackB.arr[i], i);
		i--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.name = 'a';
	b.name = 'b';
	a.top = -1;
	b.top = -1;
	parse_full(argc, argv, &a, &b);
	return (0);
}
/*
int	main(void)
{

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
	ft_printf("cost\n");
	int i;
	for (i = 30; i < 40; i++)
		fill(&sa, i);
	for (i = 41; i < 51; i++)
		fill(&sb, i);
	print_stack(sa, sb);
	ft_printf("el coste del numero 32 en sa es: %d\n", cost(sa, 10));
	ft_printf("checking lift\n");
	lift(&sa, 5);
	print_stack(sa, sb);
	print_stack(sa, sb);
	target_sort(&sa, &sb);
	print_stack(sa, sb);
	return (0);
}
*/
