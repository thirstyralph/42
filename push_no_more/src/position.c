/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:05:17 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/07 21:07:28 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	middle(int n)
{
	return ((n / 2) - (n % 2));
}

int	single_cost(int pos, int top, int middle)
{
	if (middle == 1)
		return (top - pos);
	else
		return (pos + 1);
}

int	median(int top, int target_a)
{
	if (target_a > top / 2)
		return (2);
	else
		return (1);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
