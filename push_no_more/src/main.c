#include "./../push_swap.h"

int	main(int argc, char *argv[])
{
	// declara las estructuras
	t_stack	a;
	t_stack	b;
	// t_stack a.arr = parse
	a.top = argc - 2;
	a.arr = parse(argc, argv);
	a.name = 'a';
	b.name = 'b';
	a.max_size = argc - 2;
	b.max_size = argc - 2;
	// malloc b.arr
//	ft_printf("a2 = %d\na1 = %d\na0 = %d\n", a.arr[2], a.arr[1], a.arr[0]);
	if (a.top == 1)
		sort_two(&a);
	else if (a.top == 2)
		sort_three(&a);
	else
	{
		b.arr = malloc(sizeof(int) * (argc - 1));
		if (!b.arr)
			return (1);
		b.top = -1;
		print_stacks(a, b);
		turk(&a, &b);
		free(b.arr);
	}
	free(a.arr);
	return (0);
}
