/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 20:34:48 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/02 19:31:40 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	use_msg(void)
{
	(void)!write(1, "use\n", 4);
	(void)!write(1, "Sets: 1(Mandelbrot), 2(Julia)\n", 30);
	(void)!write(1, "(Julia only) set, c(re) c(im)\n", 30);
}

t_conf	parse(int argc, char *argv[])
{
	t_conf		r;
	t_complex	z;

	if (argc == 2 && argv[1][0] == '1')
	{
		r.set = 1;
		return (r);
	}
	else if (argc == 4 && argv[1][0] == '2')
	{
		z.re = (double)ft_atoi(argv[2]);
		z.im = (double)ft_atoi(argv[3]);
		r.z = z;
		return (r);
	}
	use_msg();
	exit(1);
}

/*
t_conf	parse(int argc, char *argv[])
{
	//julia set parameters not implemented!!! FIX
	//shitty parse, REWRITE
	t_conf	r;

	if (argc == 2)
	{
		if (argv[1][0] == '1')
			r.set = 1;
		else if (argv[1][0] == '2')
			r.set = 2;
		else
		{
			use_msg();
			exit(0);
		}
	}
	else
	{
		use_msg();
		exit(0);
	}
	return (r);
}
*/
