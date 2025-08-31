/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:28:15 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/31 21:08:59 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/MLX42/include/MLX42/MLX42.h"
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#define WIDTH 	500
#define HEIGHT 	500

/*
  Main MLX handle, carries important data in regards to the program.
  window The window itself.
  context Abstracted opengl data.
  width The width of the window.
  height The height of the window.
delta_time The time difference between the previous frame and the current frame.
typedef struct mlx
{
	void*		window;
	void*		context;
	int32_t		width;
	int32_t		height;
	double		delta_time;
}	mlx_t;
 */
typedef struct complex
{
	double	re;
	double	im;
}	t_complex;

typedef struct config
{
	int			set;
	int			z;
	double		zoom;
	t_complex	center;
}	t_conf;

//functions
//main.c
int			main(int argc, char *argv[]);
//parse
void		use_msg(void);
t_conf		parse(int argc, char *argv[]);
//complex_ops.c
t_complex	add(t_complex a, t_complex b);
t_complex	mul(t_complex a, t_complex b);
double		mod_squared(t_complex z);
//mandelbrot.c
int			mandelbrot(t_complex c, int limit);
//utils
uint32_t	offset(int x, int y, mlx_t data);
void		my_scroll(double xdelta, double ydelta, void *param);
void		defaults(t_conf *config);
