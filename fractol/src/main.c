/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:41:34 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/02 23:28:20 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

static void	ft_error(void)
{
	exit(EXIT_FAILURE);
}

int	main(int argc, char *argv[])
{
	mlx_t		*mlx;
	mlx_image_t	*img;
	t_conf		conf;
	t_app		app;

	conf = parse(argc, argv);
	defaults(&conf);
	mlx = mlx_init(conf.x_limit, conf.y_limit, "fract-ol", false);
	if (!mlx)
		ft_error();
	img = mlx_new_image(mlx, conf.x_limit, conf.y_limit);
	app = unify(mlx, &img, &conf);
	mlx_key_hook(mlx, key_hook, &app);
	mlx_close_hook(mlx, my_close, &app);
	mlx_scroll_hook(mlx, my_scroll, &app);
	mlx_loop_hook(mlx, refresh, &app);
	draw_frame(&app);
	mlx_loop(mlx);
	return (0);
}
