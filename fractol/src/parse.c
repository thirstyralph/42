#include "../fractol.h"

void	use_msg(void)
{
	(void)!write(1, "use\n", 4);
	(void)!write(1, "Sets: 1(Mandelbrot), 2(Julia)\n", 30);
}

t_conf	parse(int argc, char *argv[])
{
	t_conf	r;

	if (argc == 2)
	{
		if (argv[1][0] == '1')
			r.set = 1;
		else if (argv[1][0] == '2')
			r.set = 2;
		else
		{
			use_msg();
			exit(0);
		}
	}
	else
	{
		use_msg();
		exit(0);
	}
	return (r);
}
