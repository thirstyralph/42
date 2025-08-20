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

#include "push_swap.h"

char	double_rotate(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	return (OP_ROT + 3);
}

char	double_swap(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	return (OP_SWAP + 3);
}

char	double_reverse(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	return (OP_REV + 3);
}
