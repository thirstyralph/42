/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:44:49 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 13:11:07 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

void	alloc_stacks(int argc, t_stack *a, t_stack *b)
{
	a->arr = malloc(sizeof(int) * (argc - 1));
	if (!a->arr)
		exit(1);
	a->top = argc - 1;
	b->arr = malloc(sizeof(int) * (argc - 1));
	if (!b->arr)
	{
		free(a->arr);
		exit(1);
	}
	b->top = argc - 1;
}

void	exit_safely(t_stack *a, t_stack *b, int status)
{
	free(a->arr);
	free(b->arr);
	exit (status);
}
