/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:12:28 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 18:29:11 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	sa;
	t_stack	sb;
	char	*row;
	char	*opt_row;

	sa.id = 1;
	sb.id = 2;
	sa.arr = malloc(sizeof(int) * (argc - 1));
	sb.arr = malloc(sizeof(int) * (argc - 1));
	if (!sa.arr || !sb.arr)
		exit_safely(&sa, &sb);
	parse(&sa, &sb,  argc, argv);
	row = turk(&sa, &sb);
	opt_row = optimise(row);
	print_row(opt_row);
	free(row);
	free(opt_row);
	return (0);
}
