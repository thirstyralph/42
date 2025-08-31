#include "../fractol.h"

void	my_scroll(double xdelta, double ydelta, void* param)
{
	(void)param;
	(void)xdelta;
	if (ydelta > 0)
		write(0, "up\n", 3);
	else if (ydelta < 0)
		write(0, "do\n", 3);
}

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
	if (conf.set == 1)
		conf.set = 2;
	mlx_scroll_hook(mlx, my_scroll, NULL);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (0);
}
