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
#include "stdio.h"

/*
	receives:
	t_stack a
	int n;
	returns: int position of the target
*/
int	target(t_stack a, int n)
{
	int	i;
	int	j;

	j = 1;
	while (n + j <= a.arr[biggest(a.arr, a.top)])
	{
		i = 0;
		while(i <= a.top)
		{
			if (n + j == a.arr[i])
			{
				return(i);
			}
			i++;
		}
		j++;
	}
	return (smallest(a.arr, a.top));
}
