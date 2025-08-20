/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:30:32 by ranavarr          #+#    #+#             */
/*   Updated: 2024/12/30 16:31:23 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	if (!n)
		return (0);
	cpy1 = (unsigned char *)s1;
	cpy2 = (unsigned char *)s2;
	while ((n > 1) && ((*cpy1) == (*cpy2)))
	{
		cpy1++;
		cpy2++;
		n--;
	}
	return ((*cpy1) - (*cpy2));
}
