/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:29:10 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/03 11:12:04 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

void	defaults(t_conf *config)
{
	config->zoom = 3.5 / WIDTH;
	config->center.im = 0;
	config->center.re = 0;
	config->x_limit = WIDTH;
	config->y_limit = HEIGHT;
	config->max = ITER_MAX;
}

t_complex	pixel_to_complex(int x, int y, double zoom)
{
	t_complex	r;

	r.im = (double)y * zoom;
	r.re = (double)x * zoom;
	return (r);
}
