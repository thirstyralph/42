/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_safely.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:11:13 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 18:11:15 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"
#include <limits.h>
#include <stdio.h>

void	exit_safely(t_stack *a, t_stack *b)
{
	ft_printf("ERROR \n");
	if (a && a->arr)
		free(a->arr);
	if (b && b->arr)
		free(b->arr);
	exit(1);
}
