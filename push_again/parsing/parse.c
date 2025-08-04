#include "./../push_swap.h"
#include <limits.h>
#include <stdio.h>

 /*
	is_int
	returns:
		1 if the parameter is a number
		0 if the parameter is a string
*/
int	is_int(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
	repeats
	checks for repeating digits
	returns:
		1 if there is no repetition
		0 if the given number is in the array
*/
int	repeats(int n, int *tab, int top)
{
	int	i;

	i = 0;
	while (n < top)
	{
		if (tab[i] == n)
			return (0);
		i++;
	}
	return (1);
}

void	add(t_stack *stack, int n)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int) * (stack->top + 2));
	if (!tmp)
		return ;
	while (i < stack->top)
	{
		tmp[i] = stack->arr[i];
		i++;
	}
	tmp[i] = n;
	stack->top++;
	free(stack->arr);
	stack->arr = tmp;
}

int	parse_single(char *str, t_stack *a)
{
	int	n;

	if (is_int(str) == 0)
		exit_safely_parse(a);
	n = ft_atoi(str);
	if (repeats(n, a->arr, a->top))
		exit_safely_parse(a);
	return (n);
}

void parse(t_stack *a,int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		add(a, parse_single(argv[i], a));
		i++;
	}
}
/*
int	is_in_int_range(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num *= sign;
	return (num >= INT_MIN && num <= INT_MAX);
}

int main()
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	top = 6;

	//isint
	printf("is %s a number = %d\n", "a", is_int("a"));
	printf("is %s a number = %d\n", "3", is_int("3"));
	printf("is %s a number = %d\n", "-b3", is_int("-1b"));
	//repeats
	printf("does number 6 repeat = %d\n", repeats(0, tab, top));
	return (0);
}
*/
