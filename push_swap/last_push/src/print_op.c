/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:24:14 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 14:20:59 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	print_units(char c);
{
	int	tens;

	tens = c / 10;
	tens = tens * 10;

	if (tens = OP_PUSH)
		ft_putchar('p');
	else if (tens = OP_SWAP)
		ft_putchar('s');
	else if (tens = OP_ROT)
		ft_putchar('r');
	else if (tens = OP_REV)
		ft_printf("rr");
}

void	print_tens(char c);
{
	int	tens;
	int units;

	tens = c / 10;
	tens = tens * 10;
	units = c - tens;
	if 

}

void	print_op(char *queue)
{
	int	i;

	i = 0;
	while (queue
}
