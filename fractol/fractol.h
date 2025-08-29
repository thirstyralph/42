/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 03:13:41 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/29 04:37:33 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include <limits.h>
# include <complex.h>
# include "./include/libft/libft.h"
# include "./include/ft_printf/ft_printf.h"
# include "mlx.h"

//structs
typedef struct s_complex
{
	double	re;
	double	im;
}	t_complex;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_config
{
	char		set;
	int			x;
	int			y;
	double		z;
	double		zoom;
	double		center;
	int			max_iterations;
	int			color;
}				t_conf;

//functions
//parse.c
void		use_message(void);
t_conf		parse(int argc, char *argv[]);
//complex_ops.c
t_complex	add(t_complex a, t_complex b);
t_complex	mul(t_complex a, t_complex b);
double		mod_squared(t_complex z);
//mandelbrot.c
int			mandelbrot(t_complex c, int limit);
//utils.c
t_complex	next_pixel(t_conf conf, t_complex prev);
//color.c
int			calculate_color(t_conf config, t_data data, int prev);

#endif
