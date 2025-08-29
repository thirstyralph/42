/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 03:13:09 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/29 14:23:53 by ranavarr         ###   ########.fr       */
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
int	mandelbrot(t_complex c, int limit)
{
	t_complex	tmp;
	int			i;

	i = 0;
	tmp.re = 0;
	tmp.im = 0;
	while (mod_squared(tmp) <= 4 && i < limit)
	{
		tmp = add(mul(tmp, tmp), c);
		i++;
	}
	return (1);
}
/*
void	mandelbrot_frame(t_data *data, t_conf *conf)
{
	t_complex	pixel;
	int			y;
	int			x;
	int			color;
	char		*dst;

	x = 0;
	 = 0;
	while (x <= conf->x && y <= conf->y)
	{
		dst = data->addr + (y * data->line_length + x
				* (data->bits_per_pixel / 8));
		color = calculate_color(*conf, *data,
				mandelbrot(pixel, conf->max_iterations));
		pixel = next_pixel(*conf, pixel);
	}
}
*/
