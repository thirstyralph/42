/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:16:13 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 19:14:33 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*sort(t_stack *a, t_stack *b)
{
	char	*row;

	if (a->top == 1)
		append_char(&row, sort_two(a));
	else if (a->top == 2)
		append_str(&row, sort_three(a));
	else
		append(&row, turk(a, b))
	return (row);
}
