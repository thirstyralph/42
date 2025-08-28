/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <ranavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:49:52 by ranavarr          #+#    #+#             */
/*   Updated: 2024/12/30 19:18:44 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**splitwords(char const *s, char c, char **array)
{
	size_t	i;
	size_t	h;
	size_t	start;

	i = 0;
	h = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			array[h] = ft_substr(s, start, (i - start + 1));
			if (!array[h])
			{
				free_array(array);
				return (NULL);
			}
			h++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	array[h] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	words = count_word(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split = splitwords(s, c, split);
	return (split);
}
