/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:33:01 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/28 20:45:31 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a.top = argc - 2;
	a.arr = parse(argc, argv);
	a.name = 'a';
	b.name = 'b';
	a.max_size = argc - 2;
	b.max_size = argc - 2;
	if (a.top == 1)
		sort_two(&a);
	else if (a.top == 2)
		sort_three(&a);
	else if (!is_sorted(a))
	{
		b.arr = malloc(sizeof(int) * (argc - 1));
		if (!b.arr)
			return (1);
		b.top = -1;
		turk(&a, &b);
		free(b.arr);
	}
	free(a.arr);
	return (0);
}
