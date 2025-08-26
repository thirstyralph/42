/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 00:38:06 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/08 00:45:39 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	*arrtoi(int argc, char *argv[])
{
	int	i;
	int	*result;

	result = malloc(sizeof(int) * (argc - 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		result[argc - 2 - i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (result);
}

/*
	0 = fail, there a repeated numbers
	1 = pass, no repetition
*/
int	check_repetition(int top, int *tab)
{
	int	i;
	int	j;

	i = top;
	while (i >= 0)
	{
		j = 0;
		while (j <= top)
		{
			if (j != i && tab[i] == tab[j])
				return (0);
			j++;
		}
		i--;
	}
	return (1);
}

int	only_digits(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

int	*parse(int argc, char *argv[])
{
	int	*tmp;
	int	i;

	if (argc <= 2)
		error();
	i = 1;
	while (i < argc - 1)
	{
		if (only_digits(argv[i]) == 0)
			error();
		i++;
	}
	tmp = arrtoi(argc, argv);
	if (check_repetition(argc - 2, tmp) == 0)
	{
		free(tmp);
		error();
	}
	return (tmp);
}
