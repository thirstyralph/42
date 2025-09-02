/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:29:10 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/01 17:40:04 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

/* I no longer need this =DELETE
uint32_t	offset(int x, int y, mlx_t data)
{
	return ((y * data.width) + (x * 4));
}
*/

void	defaults(t_conf *config)
{
	config->z = 1;
	config->zoom = 1;
	config->center.im = 0.743643887037151;
	config->center.re = 0.743643887037151;
	config->x_limit = WIDTH;
	config->y_limit = HEIGHT;
	config->max = 1000;
}
/*
t_complex	pixel_to_complex(int x, int y, double zoom)
{
	t_complex	r;

	r.im = (double)y * zoom;
	r.re = (double)x * zoom;
	return (r);
}*/

t_complex pixel_to_complex(int x, int y, t_conf *conf)
{
    t_complex c;

    // Rango base (sin zoom), típicamente:
    double re_start = -2.0;
    double re_end = 1.0;
    double im_start = -1.0;
    double im_end = 1.0;

    // Ajusta rango según zoom y centro
    double re_range = (re_end - re_start) / conf->zoom;
    double im_range = (im_end - im_start) / conf->zoom;

    c.re = conf->center.re + re_start / conf->zoom + ((double)x / conf->x_limit) * re_range;
    c.im = conf->center.im + im_start / conf->zoom + ((double)y / conf->y_limit) * im_range;

    return c;
}

