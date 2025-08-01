/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:33:07 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 13:57:10 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h" 
#include <limits.h>

/*
void	dump(int *tab, int len, t_stack *a)
{
	int	i;

	i = 1;
	while (i < len)
	{
		fill(a, tab[i++]);
	}
}
*/
/* Check for repeating numbers
 * Returns:
 * 1 if there is repetition.
 * 0 if there is not.
 */
int	repeats(int *tab, unsigned int len, int num)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		if (num == tab[i])
			return (1);
	}
	return (0);
}

/*
 * not_int
 * returns:
 * 1 if the given string is not a number
 * 0 if the given string IS a number
 */
int	not_int(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (1);
	}
	return (0);
}

/*
 * Check if argument exceeds integer limit
 * returns:
 * 	1 if argument exceeds integer limit
 * 	0 if argument does NOT exceeds integer limit
 */
int	size(double num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	else
		return (0);
}

/*
 * returns:
 * 	1 if the number follows the parsing rules
 * 	0 if the number does NOT follow the parsing rules
 */
int	parse_single(char *arg, int *tab, unsigned int len)
{
	double	nbr;

	nbr = ft_atoi(arg);
	if (not_int(arg))
		return (0);
	if (size(nbr))
		return (0);
	if (repeats(tab, len, nbr))
		return (0);
	else
		return (1);
}

/*
 * if parse_full succeeds, the program continues
 * if it fails, stack a and b are freed an the program exits
 */
void	parse_full(int argc, char *argv[], t_stack *a, t_stack *b)
{
	unsigned int	len;	
	int				*tab;

	len = 0;
	alloc_stacks(argc, a, b);
	tab = malloc(sizeof(int) * (argc - 1));
	if (!tab)
		exit_safely(a, b, 1);
	while (len < ((unsigned int )argc - 1))
	{
		if (parse_single(argv[len], tab, len) == 0)
			exit_safely(a, b, 1);
		len++;
	}
	dump(tab, len, a);
}

/*
int	parse_single(char **str, int **tab, int *len)
{
	int	nbr;

	if (not_int(*str))
		return (1) ;
	nbr = ft_atoi((const char *) str);
	if (repeats(*tab, *len, nbr))
		return (1) ;
	if (size(nbr))
		return (1) ;
	*tab[*len - 1] = nbr;
	len++;
	return (0);
}


int	parse_full(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc)
	{
		if (parse(
	}
}

*/
/*
int main(void)
{
	char str[] = "24343s";

	ft_printf("cadena = %s\n", str);
	ft_printf("numero = %d\n", ft_atoi(str));
	return (0);
}
*/
