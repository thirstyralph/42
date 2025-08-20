#include <stdio.h>
#include <limits.h>
#include "./../push_swap.h"

/*
	retuns the position of the biggest number in an array
*/
int	biggest(int *tab, int top)
{
	int	i;
	int	max;
	int	max_pos;

	i = 0;
	max = INT_MIN;
	max_pos = -1;
	while (i <= top)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			max_pos = i;
		}
		i++;
	}
	return (max_pos);
}

/*
	retuns the position of the number with the position right after the one
	given as int prev
*/
int	next(int *tab, int top, int prev)
{
	int	i;
	int	max;
	int	max_pos;

	i = 0;
	max = INT_MIN;
	max_pos = -1;
	while (i <= top)
	{
		if (tab[i] > max && tab[i] < prev)
		{
			max = tab[i];
			max_pos = i;
		}
		i++;
	}
	return (max_pos);
}

/*
	receives an array of numbers and creates a similar array
	where the numberical values of the original are replaced by their
	position were they ordered.
	arguments:
		- int original: stak to be converted;
		- int top: position of the last elemnt of the array
*/
int	*indexate(int *original, int top)
{
	int	i;
	int	pos;
	int	*indexate;

	indexate = malloc(sizeof(int) * (top + 1));
	if (!indexate)
		return (NULL);
	i = top;
	pos = biggest(original, top);
	indexate[pos] = i;
	while (i > 0)
	{
		pos = next(original, top, original[pos]);
		indexate[pos] = i;
		i--;
	}
	return (indexate);
}

void	index_stack(t_stack *a, int argc, int *tab)
{
	int	i;

	i = 1;
	a->top = argc - 2;
	a->arr = indexate(tab, argc - 2);
}
