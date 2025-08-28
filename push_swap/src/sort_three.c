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

/*
	returns the position of the biggest digit in an array, asumes there is no 
	repetition.
	on error: -1;
*/
int	biggest(int *arr, int top)
{
	int	i;
	int	big;
	int	big_pos;

	i = 0;
	big = INT_MIN;
	big_pos = -1;
	while (i <= top)
	{
		if (arr[i] > big)
		{
			big = arr[i];
			big_pos = i;
		}
		i++;
	}
	return (big_pos);
}

// returns the position of the smallest element in an array
int	smallest(int *arr, int top)
{
	int	i;
	int	small;
	int	small_pos;

	i = 0;
	small = INT_MAX;
	small_pos = -1;
	while (i <= top)
	{
		if (arr[i] < small)
		{
			small = arr[i];
			small_pos = i;
		}
		i++;
	}
	return (small_pos);
}

void	sort_three(t_stack *a)
{
	while (!is_sorted(*a))
	{
		if (a->arr[2] > a->arr[1])
			swap(a);
		if (a->arr[1] > a->arr[0])
			reverse_rotate(a);
	}
}
