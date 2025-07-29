#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>

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

//Not an integer
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

//Argument exceeds integer limit
int	size(double num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	else
		return (0);
}

void	parse(char **str, int **tab, int *len)
{
	int	nbr;

	if (not_int(*str))
		return ;
	nbr = ft_atoi((const char *) str);
	if (repeats(*tab, *len, nbr))
		return ;
	if (size(nbr))
		return ;
	*tab[*len - 1] = nbr;
	len++;
}
/*
int main(void)
{
	char str[] = "24343s";

	ft_printf("cadena = %s\n", str);
	ft_printf("numero = %d\n", ft_atoi(str));
	return (0);
}
*/
