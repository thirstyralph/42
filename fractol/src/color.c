/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 04:17:04 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/29 04:53:12 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"


int	calculate_color(t_conf conf, t_data data, int iter)
{
	if (iter == conf.max_iterations)
		return (0x000000);
}
