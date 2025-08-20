/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:18:28 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 18:48:52 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"
#include "stdio.h"

void	append_char(char **str, char c)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	len = ft_strlen(*str);
	tmp = malloc(sizeof(char) * (len + 3));
	if (!tmp)
		return ;
	while (i < len)
	{
		tmp[i] = (*str)[i];
		i++;
	}
	tmp[i] = c;
	tmp[i + 1] = 0;
	free(*str);
	*str = tmp;
}

void	append_str(char **s1, char *s2)
{
	int		i;
	char	*tmp;

	tmp = ft_strjoin(*s1, s2);
	free(*s1);
	*s1 = tmp;
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(sizeof(char) * 2);
	str2 = malloc(sizeof(char) * 2);
	str1[0] = 'a';
	str2[0] = 'h';
	str1[1] = 0;
	str2[1] = 0;
	append_char(&str1, 'j');
	printf("str1 = %s\n", str1);
	append_str(&str1, str2);
	printf("str1 = %s\n", str1);
	return (0);
}
*/
