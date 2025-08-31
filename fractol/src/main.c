/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:41:34 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/31 21:03:29 by ranavarr         ###   ########.fr       */
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
	mlx_t	*mlx;
	t_conf	conf;

	conf = parse(argc, argv);
	mlx = mlx_init(WIDTH, HEIGHT, "fract-ol", true);
	if (!mlx)
		ft_error();
	defaults(&conf);
	if (conf.set == 1)
		conf.set = 2;
	mlx_scroll_hook(mlx, my_scroll, &conf.zoom);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (0);
}
