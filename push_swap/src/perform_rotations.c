/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 01:35:03 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/08 01:41:31 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include "./../push_swap.h"

void	do_rotation(t_stack *a, t_stack *b, t_mov movs)
{
	int	i;

	i = 0;
	while (i < movs.ra)
	{
		rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.rb)
	{
		rotate(b);
		i++;
	}
	i = 0;
	while (i < movs.rr)
	{
		double_rotate(a, b);
		i++;
	}
}

void	do_reverse_rotation(t_stack *a, t_stack *b, t_mov movs)
{
	int	i;

	i = 0;
	while (i < movs.rra)
	{
		reverse_rotate(a);
		i++;
	}
	i = 0;
	while (i < movs.rrb)
	{
		reverse_rotate(b);
		i++;
	}
	i = 0;
	while (i < movs.rrr)
	{
		double_reverse(a, b);
		i++;
	}
}

void	perform_rotations(t_stack *a, t_stack *b, t_mov movs)
{
	do_reverse_rotation(a, b, movs);
	do_rotation(a, b, movs);
}
