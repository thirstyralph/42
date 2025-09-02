/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:05:33 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/01 17:42:54 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
/*
void	next_pixel(int *x, int *y, t_conf config)
{
	if (*x == config.x_limit -1)
	{
		*x = 0;
		(*y)++;
	}
	else
		(*x)++;
}
*/
/* PROBLEMS:
	[ ] add frame render parameters to avoid pixel_to_complex ineficient operations
	[ ] 
void	draw_frame(t_app *app)
{
	int			x;
	int			y;
	int			it;
	mlx_t		*mlx;
	t_conf		*conf;
	mlx_image_t	*img;

	y = 0;
	x = 0;
	mlx = app->mlx;
	conf = app->conf;
	img = app->img;
	mlx_delete_image(mlx, img);
	img = mlx_new_image(mlx, conf->x_limit, app->conf->y_limit);
	while (y < conf->y_limit)
	{
		x = 0;
		while(x < conf->x_limit)
		{
			it = mandelbrot(pixel_to_complex(x, y, conf), app->conf->max);
			mlx_put_pixel(img, x, y, color(it, conf->max));
			x++;
		}
		y++;
	}
	mlx_image_to_window(mlx, img, 0, 0);
}
