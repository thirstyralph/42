/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:59:34 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/03 15:25:34 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

inline int	color(int iter, int max)
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	double			t;

	if (iter == max)
		return (0x000000FF);
	t = (double)iter / max;
	r = (unsigned char)(40 * (1 - t) * t * t * t * 255);
	g = (unsigned char)(40 * (1 - t) * (1 - t) * t * t * 255);
	b = (unsigned char)(40 * (1 - t) * (1 - t) * (1 - t) * t * 255);
	return (r << 24 | g << 16 | b << 8 | 0xFF);
}
