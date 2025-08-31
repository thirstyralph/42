/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:29:10 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/31 20:32:32 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

uint32_t	offset(int x, int y, mlx_t data)
{
	return ((y * data.width) + (x * 4));
}

void	my_scroll(double xdelta, double ydelta, void *param)
{
	double	*zoom;

	(void)xdelta;
	zoom = (double *)param;
	if (ydelta > 0)
		*zoom -= 1.0;
	else if (ydelta < 0)
		*zoom += 1.0;
	printf("zoom = %f\n", *zoom);
}

void	defaults(t_conf *config)
{
	config->z = 1;
	config->zoom = 1;
	config->center.im = 0;
	config->center.re = 0;
}
