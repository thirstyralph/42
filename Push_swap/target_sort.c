/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:14:19 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 13:38:13 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"

/*
typedef struct stack
{
	char	name;
	int		arr[MAX_SIZE];
	int		top;
}	t_stack;

typedef struct target
{
	int		target[MAX_SIZE];
	int		cost[MAX_SIZE];
	int		top;
}	t_target;
*/

/* finds the number closest but still bigger than a given number
 */
int	closest(t_stack a, int number)
{
	int	min;
	int	i;

	i = 0;
	min = INT_MAX;
	while (i <= a.top)
	{
		if (a.arr[i] < min && a.arr[i] > number)
			min = a.arr[i];
		i++;
	}
	return (min);
}

/*
 * Returns the position where the number inserted is in the given stack
 */
int	target(t_stack a, int number)
{
	int	i;
	int	target_num;

	i = 0;
	target_num = closest(a, number);
	while (i <= a.top)
	{
		if (a.arr[i] == target_num)
			return (i);
		i++;
	}
	return (-1);
}

/*
 * Returns the number of movements necessary to move certain position to top
 * t_stack a:	Stack to be meassured
 * int pos:		Position to be meassured
 * return:		Number of movements necessary.
 */
int	cost(t_stack a, int pos)
{

	int	middle;

	if (pos < 0 || pos > a.top)
		return (-1);
	middle = (a.top / 2) + (a.top % 2);
	if (pos >= middle)
		return (a.top - pos);
	else
		return (pos + 1);
}

void	lift(t_stack *a, int pos)
{
	int	middle;
	int	i;
	int	steps;

	if (pos == a->top)
		return ;
	i = 0;
	middle = (a->top / 2) + (a->top % 2);
	steps = cost(*a, pos);
	if (pos >= middle)
	{
		while (i < steps)
		{
			rotate(a);
			i++;
		}
	}
	else 
	{
		while (i < steps)
		{
			reverse_rotate(a);
			i++;
		}
	}
}

/*
 * Cheapest
 * Finds the position of the cheapest move.
 * t_target t:		structure with information about target position and cost.
 * return value:	position of the cheapest move.
 */
int	cheapest(t_target t)
{
	int i;
	int min_cost;
	int index;


	min_cost = INT_MAX;
	i = 0;
	index = 0;
	while (i <= t.top)
	{
		if (t.cost[i] < min_cost)
		{
			min_cost = t.cost[i];
			index = i;
		}
		i++;
	}
	return (index);
}
/*
void	target_sort(t_stack *a, t_stack *b)
{
	t_target	goal;
	int			i;

	while (isempty(*b) == 0)
	{
		i = 0;
		while (i <= b->top)
		{
			goal.target[i] = target(*a, b->arr[i]);
			goal.cost[i] = cost(*a, goal.target[i]) + cost(*b, i);
			i++;
		}
		goal.top = b->top;
		lift(b, cheapest(goal));
		push(a, b);
	}
	print_stack(*a, *b);

	while (isordered(*a) == 0)
	{
		print_stack(*a, *b);
		reverse_rotate(a);
	}	
	*/
