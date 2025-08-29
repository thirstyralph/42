/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 04:15:44 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/29 12:34:18 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

/*
 * in the complex plane, Y imaginary and X is real
 */
t_complex	next_pixel(t_conf conf,	t_complex prev)
{
	t_complex	r;

	if (prev.re == conf.x)
	{
		r.re = 0;
		r.im = prev.im + 1;
	}
	else
	{
		r.re = prev.re + 1;
		r.im = prev.im;
	}
	return (r);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

t_complex	as_complex(t_conf conf, x, y)
{
	
}
