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
	printf("n = %d ", n);
	while (n + j <= a.arr[biggest(a.arr, a.top)])
	{
		i = 0;
		while(i <= a.top)
		{
			if (n + j == a.arr[i])
			{
				printf("???target_pos = %d\n", i);
				return(i);
			}
			i++;
		}
		j++;
	}
	return (smallest(a.arr, a.top));
}
/*
	target_pos = smallest(a.arr, a.top);
	small = INT_MAX;
	i = 0;
	while (i <= a.top)
	{
		printf("target loop n%d/%d, our b number is %d\n", i, a.top, n);
		if (a.arr[i] > n && a.arr[i] < small)
		{
			printf("WTF Brother, is a.arr[i]= %d bigger than n=%d\n", a.arr[i], n);
			small = a.arr[i];
			target_pos = i;
		}
		
		i++;
	}
	if (small != INT_MAX)
	{
		if (target_pos + 1 <= a.top)
			return (target_pos + 1);
		else
			return(0);
	}
	return (target_pos);

}


int	target(t_stack a, int n)
{
	int	i;
	int	target_pos;
	int	small;

	target_pos = smallest(a.arr, a.top);
	small = INT_MAX;
	
	printf("=== TARGET DEBUG for n=%d ===\n", n);
	printf("Stack A contents: ");
	for (int j = 0; j <= a.top; j++) {
		printf("a[%d]=%d ", j, a.arr[j]);
	}
	printf("\n");
	printf("Initial target_pos from smallest() = %d (value = %d)\n", target_pos, a.arr[target_pos]);
	printf("Looking for smallest value > %d\n", n);
	
	i = 0;
	while (i <= a.top)
	{
		printf("Checking a[%d]=%d: ", i, a.arr[i]);
		if (a.arr[i] > n && a.arr[i] < small)
		{
			printf("✓ Found better target! %d > %d and %d < %d\n", 
				a.arr[i], n, a.arr[i], small);
			small = a.arr[i];
			target_pos = i;
			printf("  Updated: small=%d, target_pos=%d\n", small, target_pos);
		}
		else if (a.arr[i] > n)
		{
			printf("✗ %d > %d but %d >= %d (not smaller than current best)\n", 
				a.arr[i], n, a.arr[i], small);
		}
		else
		{
			printf("✗ %d <= %d\n", a.arr[i], n);
		}
		i++;
	}
	
	printf("Final result: target_pos=%d (value=%d)\n", target_pos, a.arr[target_pos]);
	printf("=== END TARGET DEBUG ===\n\n");
	
	return (target_pos);
}
*/
