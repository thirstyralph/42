/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callbacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:25:04 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/03 00:08:13 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

//	Necessary callbacks
//	- Scroll
//	- Close window
//		free everything (if needed) and exit
//		for Esc too
//	- Resize ==I'll skip it for now==

void	my_scroll(double xdelta, double ydelta, void *param)
{
	t_app	*app;

	(void)xdelta;
	app = (t_app *)param;
	if (ydelta > 0)
	{
		app->conf->zoom *= 1.1;
		app->conf->max *= 0.9090909;
	}
	else if (ydelta < 0)
	{
		app->conf->zoom *= 0.90;
		app->conf->max *= 1.1;
	}
	draw_frame(app);
}

/* let's just not do this for now
void	my_resize(int32_t width, int32_t height, void *param)
{
	t_app	*app;

	app = (t_app *)param;
	app->conf->x_limit = width;
	app->conf->y_limit = height;
	draw_frame(&app->img, app->mlx, *app->conf);
	printf("w = %d, h = %d\n", width, height);
}
*/

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
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		my_close(param);
}

void	refresh(void *param)
{
	t_app	*app;

	app = (t_app *)param;
	mlx_image_to_window(app->mlx, app->img, 0, 0);
}
