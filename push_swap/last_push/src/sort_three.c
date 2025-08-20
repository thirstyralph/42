/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:14:49 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 16:40:21 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	biggest(t_stack a)
{
	int	i;
	int	big;

	big = INT_MIN;
	while (a.arr[i])
	{
		if (a.arr[i] > big)
			big = i;
		i++;
	}
	return (big);
}

int	smallest(t_stack a)
{
	int	i;
	int	small;

	small = INT_MAX;
	while (a.arr[i])
	{
		if (a.arr[i] < small)
			small = i;
		i++;
	}
	return (small);
}

void	sort_three(t_stack *a)
{
	int	big;
	int	small;

	big = biggest(*a);
	small = smallest(*a);
}
