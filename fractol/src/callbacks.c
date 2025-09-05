/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callbacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:25:04 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/03 16:25:24 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	my_scroll(double xdelta, double ydelta, void *param)
{
	t_app	*app;

	(void)xdelta;
	app = (t_app *)param;
	if (ydelta > 0)
	{
		app->conf->zoom *= 0.8;
	}
	else if (ydelta < 0)
	{
		app->conf->zoom *= 1.20;
	}
	draw_frame(app);
}

void	my_close(void *param)
{
	t_app	*app;

	app = (t_app *)param;
	mlx_delete_image(app->mlx, app->img);
	mlx_terminate(app->mlx);
	exit(0);
}

void	key_hook(mlx_key_data_t keydata, void *param)
{
	t_app	*app;

	app = (t_app *)param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		my_close(param);
	else if (keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		app->conf->center.im -= 10 * app->conf->zoom;
	else if (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		app->conf->center.im += 10 * app->conf->zoom;
	else if (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		app->conf->center.re -= 10 * app->conf->zoom;
	else if (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS)
		app->conf->center.re += 10 * app->conf->zoom;
	draw_frame(app);
}

void	refresh(void *param)
{
	t_app	*app;

	app = (t_app *)param;
	mlx_image_to_window(app->mlx, app->img, 0, 0);
}
