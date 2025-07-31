#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h" #include <limits.h>
void dump(int argc, char **argv, t_stack *a)
{
	int i;

	i = 1;
	while (i < argc)
		fill(a, argv[0][i++]);
}

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
int parse(single(char 
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
*/

int	parse_full(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc)
	{
		if (parse(
	}
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
