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
	/*
		operation:
			1. decide which loop to use
			2 start the loop
			in the loop:
				1. para cada pixel de la imagen, calcula el numero de iteraciones
				2. para cada numero calculado, poner ese valor en la array de pantalla
			necesito:
			- funcion mandelbrot (creo que ya la tengo)
			- funcion asign_color(int iter, int color)
			- a function for each color scheme??
			- loop_mandelbrot
			- loop julia
				que hacen los loops?
				- toman el zoom
				- toman el size de la pantalla
				- tengo que tener en cuenta el centro tambien
				- para cada posicion(pixel), calculas el numero de iteraciones para
					el centro, ajustando con el zoom, fd
				
		- funcion que para cada pixel calcule la posicion x e y, ejecute mandelbrot
			y asigne ese valor a un color 
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

