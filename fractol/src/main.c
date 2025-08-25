#include "./../fractol.h"
#include <stdio.h>

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	horizontal_line(t_data *data, int start, int end, int y, int color)
{
	int	i;

	i = start;
	while (i <= end)
	{
		my_mlx_pixel_put(data, i, y++, color);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
		int		i;


	//actual code that I want to use
	//the parameters are parsed
	parse(argc, argv);
	//first I have to merge my display struct and the one here
	// one of two display loop functions is choosen depending on the parameters
	// if J, julia_loop
	// if M, Mandelbrot_loop
	// create a screen window
	// 
	
	i = 0;
	//create a screen window
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	while (i <= 1080)
	{
		printf(" %d", i);
		my_mlx_pixel_put(&img, i, i, i);
		mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
		i++;
	}
	mlx_loop(mlx);
}

