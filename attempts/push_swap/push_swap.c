/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:33:09 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/22 17:41:22 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_printf/ft_printf.h"
#include "./libft/libft.h"
#include "push_swap.h"

void	fill_a(int argc, char *argv[], int *items)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		items[i] = ft_atoi(argv[i]);
		i++;
	}
}

void	display_stacks(t_stack sa, t_stack sb)
{
	unsigned int	i;

	i = 1;
	ft_printf("A | B\n");
	ft_printf("--|--");
	while (i < sa.max_size)
	{
		ft_printf("\n%d | %d", sa.items[i], sb.items[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	sa;
	t_stack	sb;

	sa.max_size = argc;
	sb.max_size = argc;
	sb.items = malloc(sizeof(int) * sb.max_size);
	sa.items = malloc(sizeof(int) * sa.max_size);
	fill_a(argc, argv, sa.items);
	display_stacks(sa, sb);
	return (0);
}
