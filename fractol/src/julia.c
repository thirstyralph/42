/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:13:02 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/03 11:27:19 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

/*
 * Zn = Zn-1^2 + c where c is constant and Z0 is the pixel
 */
int	julia(t_complex c, t_complex z, int limit)
{
	t_complex	tmp;
	int			i;

	i = 0;
	tmp.re = z.re;
	tmp.im = z.im;
	while (mod_squared(tmp) <= 4 && i < limit)
	{
		tmp = add(mul(tmp, tmp), c);
		i++;
	}
	return (i);
}
