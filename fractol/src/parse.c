/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:22:12 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/06 13:25:50 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	use_msg(void)
{
	(void)!write(1, "use:\n", 5);
	(void)!write(1, "Sets: 1(Mandelbrot), 2(Julia)\n", 30);
	(void)!write(1, "(Julia only): c (re) c(im) ", 27);
	(void)!write(1, "| c range = (2 - 2)\n", 20);
	return (1);
}

int	complex_range(t_complex n, double min, double max)
{
	if (n.re > max || n.im > max)
		return (0);
	if (n.re < min || n.im < min)
		return (0);
	return (1);
}

int	set_arg(int argc, char *argv[])
{
	if (argc == 2 && argv[1][0] == '1')
		return (1);
	else if (argc == 4 && argv[1][0] == '2')
		return (2);
	else
		exit(use_msg());
}

int	range(double max, double min, double n)
{
	if (n <= max && n >= min)
		return (1);
	else
		return (0);
}

t_conf	parse(int argc, char *argv[])
{
	t_conf		r;
	t_complex	z;

	z.re = 0.0;
	z.im = 0.0;
	r.set = 0;
	r.z = z;
	r.set = set_arg(argc, argv);
	if (r.set == 2)
	{
		if (!valid_double(argv[2]) || !valid_double(argv[3]))
			exit(use_msg());
		r.z.re = ft_atod(argv[2]);
		r.z.im = ft_atod(argv[3]);
	}
	if (!range(2.0, -2.0, r.z.re) || !range(2.0, -2.0, r.z.im))
		exit(use_msg());
	return (r);
}
