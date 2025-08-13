/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 03:32:42 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/07 23:00:08 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	receives:
	t_stack a
	int n;
	returns: int position of the target
*/
int	target(t_stack a, int n)
{
	int	i;
	int	target_pos;
	int	small;

	target_pos = -1;
	small = n;
	i = 0;
	while (i <= a.top)
	{
		if (a.arr[i] > n && small < a.arr[i])
		{
			small = a.arr[i];
			target_pos = i;
		}
		i++;
	}
	return (target_pos);
}
