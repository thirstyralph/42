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

//	mlx_init
//	mlx_new_image, create new img
//	maybe I have to create a structure with EVERYTHING, that is:
//		- MLX_T struct
//		- image
//		- pointer to the fractal function to use
//	set up hooks
//		[ ] scroll hook
//		[ ] close hook
//		[ ] resize hook --Maybe it'd be better to ignore this one for now--
//		- only one hook function? or one per action?		
//		- how to make sure it renders once per action?
//		- how to make it render the correct fractal each time?
//		  maybe a wrapper struct with a pointer function?
//		- I have to make callbacks file for callback funcitons
//
//	start loop
//	terminate
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
	if (conf.set == 1)
		conf.set = 2;
	img = mlx_new_image(mlx, conf.x_limit, conf.y_limit);
	app = unify(mlx, &img, &conf);
	app->func = &mandelbrot;
	mlx_key_hook(mlx, key_hook, &app);
	mlx_close_hook(mlx, my_close, &app);
	mlx_scroll_hook(mlx, my_scroll, &app);
	mlx_loop_hook(mlx, refresh, &app);
	draw_frame(&app);
	mlx_loop(mlx);
	return (0);
}
