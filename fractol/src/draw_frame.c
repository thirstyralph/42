/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:05:33 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/02 23:27:02 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
/*
void	put_pixel(mlx_image_t *img, int x, int y, int color)
{
	int	pos;

	pos = sizeof(char) * (2 * x + 4 * img->width * y);
	img->pixels[pos] = color;
}
*/

/*
 PROBLEMS:
	[ ] add frame render parameters to avoid pixel_to_complex 
	ineficient operations
	[ ] too long
	[ ] overall just terrible, rewrite
*/
void	draw_frame(t_app *app)
{
	int			x;
	int			y;
	mlx_t		*mlx;
	t_complex	pos;

	y = -1;
	x = -1;
	mlx = app->mlx;
//	app->img = mlx_new_image(mlx, app->conf->x_limit, app->conf->y_limit);
	while (++y < app->conf->y_limit)
	{
		pos.im = ((y - (app->conf->y_limit / 2)) * app->conf->zoom)
			+ app->conf->center.im;
		x = 0;
		while (++x < app->conf->x_limit)
		{
			pos.re = ((x - (app->conf->x_limit / 2)) * app->conf->zoom)
				+ app->conf->center.re;
			mlx_put_pixel(app->img, x, y, color(mandelbrot(pos, app->conf->max),
					app->conf->max));
		}
	}
	return ;
}
