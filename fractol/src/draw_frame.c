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

	//declara x e y == 0
	//toma una imagen y la modifica? (MLX_images)
	//que es mlt_t y que es mlx_image?
	//para cada valor de x e y, calcular su posicion en el plano complejo
	//no necesito calcular offset porque put_pixel se encarga
	//aplicar la funcion que corresponda (La toma con un puntero de funcion?)
	//siguiente x e y
	//y ya esta??
void	draw_frame(t_app *app)
{
	int	x;
	int	y;
	int	it;

	y = 0;
	x = 0;
	mlx_delete_image(app->mlx, app->img);
	app->img = mlx_new_image(app->mlx, app->conf->x_limit, app->conf->y_limit);
	while (y < app->conf->y_limit)
	{
		it = mandelbrot(pixel_to_complex(x, y, app->conf), app->conf->max);
		mlx_put_pixel(app->img, x, y, color(it, app->conf->max));
		next_pixel(&x, &y, *app->conf);
	}
	mlx_image_to_window(app->mlx, app->img, 0, 0);
}
