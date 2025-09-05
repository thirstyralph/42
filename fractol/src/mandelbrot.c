/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:33:01 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/01 17:17:00 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

/*
	zn = zn-1^2 + c
	mandelbrot:
		Calculates the number of iterations of the equation for it to grow
		out of bounds.
	takes:
		complex c: Value of C
		int limit: maximum number of operations to perform.
	returns:
		int: Number of iterations 
*/
int	mandelbrot(t_complex c, t_complex z, int limit)
{
	t_complex	tmp;
	int			i;

	(void)z;
	i = 0;
	tmp.re = 0;
	tmp.im = 0;
	while (mod_squared(tmp) <= 4 && i < limit)
	{
		tmp = add(mul(tmp, tmp), c);
		i++;
	}
	return (i);
}
