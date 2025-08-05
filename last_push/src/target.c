/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 03:32:42 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 04:08:35 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	target(t_stack a, int n)
{
	int	i;
	int	target;

	target = 0;
	i = a.top;
	while (i >= 0)
	{
		if (a.arr[i] > i && a.arr[i] < a.arr[target])
			target = i;
		i--;
	}
	return (target);
}
