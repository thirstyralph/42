/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:30:50 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/31 18:31:14 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

//adition
t_complex	add(t_complex a, t_complex b)
{
	t_complex	r;

	r.re = a.re + b.re;
	r.im = a.im + a.im;
	return (r);
}

//multiplication
t_complex	mul(t_complex a, t_complex b)
{
	t_complex	r;

	r.re = a.re * b.re - (a.im * b.im);
	r.im = a.re * b.im + (a.im * b.re);
	return (r);
}

//modulus (magnitude)
double	mod_squared(t_complex z)
{
	return (z.re * z.re + z.im * z.im);
}
