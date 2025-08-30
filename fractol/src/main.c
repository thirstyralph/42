#include "../fractol.h"

static void ft_error(void)
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
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (0);
}
