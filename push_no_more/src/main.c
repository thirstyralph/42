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
	// malloc b.arr
	if (a.top == 1)
		sort_two(&a);
	else if (a.top == 2)
		sort_three(&a);
	else
	{
		b.arr = malloc(sizeof(int) * (argc - 1));
		b.top = -1;
		turk(&a, &b);
		free(b.arr);
	}
	free(a.arr);
	return (0);
}
