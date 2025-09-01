/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:59:34 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/01 17:35:15 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
/*
int	color(int iter, int max)
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	unsigned char	a;

	if (iter == max)
		return (0x000000FF);
	else
		return (0xFF00FFFF);
	a = 0xFF;
	r = (unsigned char)((255 * iter) / max);
	g = (unsigned char)((255 * iter) / max);
	b = (unsigned char)((255 * iter) / max);
	return (r << 24 | g << 16 | b << 8 | a);
}
*/

int color(int iter, int max)
{
    if (iter == max)
        return 0x000000FF;  // negro
    else
        return 0xFF0000FF - (iter * 0x00010000 / max); // De rojo a negro
}

