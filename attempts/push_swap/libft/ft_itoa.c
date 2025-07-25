/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <ranavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:50:24 by ranavarr          #+#    #+#             */
/*   Updated: 2024/12/30 17:09:03 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	take_len(unsigned int n)
{
	size_t	ret;

	ret = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

void	is_min(int *n, size_t *len, int *min, unsigned int *num)
{
	*min = 0;
	*len = 0;
	if ((*n) < 0)
	{
		(*num) = -1 * (*n);
		*len = 1;
		*min = 1;
	}
	if (!((*n) < 0))
		(*num) = (*n);
}

int	ft_int_len(int i)
{
	int	len;

	if (i == 0)
		return (1);
	len = 0;
	while (i)
	{
		len++;
		i /= 10;
	}
	return (len);
}

char	*ft_itoa(int i, char *str)
{
	int			len;
	long int	tmp;	

	tmp = (long int)i;
	len = ft_int_len(i);
	if (!str)
		return (NULL);
	if (tmp == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (tmp < 0)
	{
		len++;
		tmp *= -1;
		str[0] = '-';
	}
	while (tmp)
	{
		str[--len] = ((tmp % 10) + 48);
		tmp /= 10;
	}
	return (str);
}

/*
char	*ft_itoa(int n)
{
	size_t			len;
	char			*ret;
	int				min;
	unsigned int	num;

	is_min(&n, &len, &min, &num);
	len += take_len(num);
	ret = (char *)ft_calloc(1, len + 1);
	if (!ret)
		return (NULL);
	ret[len] = 0;
	if (!num)
		ret[len - 1] = '0';
	while (num > 0)
	{
		len--;
		ret[len] = (num % 10) + '0';
		num /= 10;
	}
	if (min)
		ret[len - 1] = '-';
	return (ret);
}
*/
