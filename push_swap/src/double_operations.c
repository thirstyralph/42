/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 03:03:20 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 03:08:50 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	double_rotate(t_stack *a, t_stack *b)
{
	_rotate(a);
	_rotate(b);
	ft_printf("rr\n");
}

void	double_swap(t_stack *a, t_stack *b)
{
	_swap(a);
	_swap(b);
	ft_printf("ss\n");
}

void	double_reverse(t_stack *a, t_stack *b)
{
	_reverse_rotate(a);
	_reverse_rotate(b);
	ft_printf("rrr\n");
}
