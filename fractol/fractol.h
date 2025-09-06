/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:28:15 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/06 13:07:27 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/MLX42/include/MLX42/MLX42.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define WIDTH		900
#define HEIGHT		800
#define ITER_MAX	150

/*
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

	double		zoom;
	int			x_limit;
	int			y_limit;
	t_complex	z;
	t_complex	center;
	int			color;
	int			max;
	int			x_offset;
	int			y_offset;
}	t_conf;

typedef struct s_app
{
	mlx_t			*mlx;
	mlx_image_t		*img;
	t_conf			*conf;
	int				(*func)(t_complex, t_complex, int);
}	t_app;

//functions
//main.c
int					main(int argc, char *argv[]);
//parse
int					use_msg(void);
t_conf				parse(int argc, char *argv[]);
//complex_ops.c
t_complex			add(t_complex a, t_complex b);
t_complex			mul(t_complex a, t_complex b);
double				mod_squared(t_complex z);
//utils
t_complex			pixel_to_complex(int x, int y, double zoom);
uint32_t			offset(int x, int y, mlx_t data);
void				defaults(t_conf *config);
//callbacks.c
void				my_scroll(double xdelta, double ydelta, void *param);
void				my_resize(int32_t width, int32_t height, void *param);
void				my_close(void *param);
void				key_hook(mlx_key_data_t keydata, void *param);
void				refresh(void *param);
//color.c
extern int			color(int iter, int limit);
//draw_frame.c
void				draw_frame(t_app *app);
//unify.c
t_app				unify(mlx_t *mlx, mlx_image_t **img, t_conf *conf);
//ft_atod.c
double				ft_atod(char *str);
//ft_atoi.c
int					ft_isdigit(char c);
int					ft_atoi(const char *nptr);
//julia.c
int					julia(t_complex c, t_complex z, int limit);
//mandelbrot.c
int					mandelbrot(t_complex c, t_complex z, int limit);
//ft_strlen.c
int					ft_strlen(const char *s);
//valid_double.c
int					valid_double(char *str);
