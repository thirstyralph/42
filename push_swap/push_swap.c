/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:33:09 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/22 14:57:00 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_printf/ft_printf.h"
#include "./libft/libft.h"
#include "push_swap.h"

void	fill_a(int argc, char *argv[], int *items)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		items[i] = ft_atoi(argv[i]);
		i++;
	}
}
void	display_stacks(struct a, struct b);

int	main(int argc, char *argv[])
{
	struct s_tack	sa;
	struct s_tack	sb;

	sa.max_size = argc;
	sb.max_size = argc;
	return (0);
}
