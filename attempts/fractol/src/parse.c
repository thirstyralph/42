#include "../fractol.h"

/*
	available parameters:
	1. fractal selection: M(mandelbrot) J(julia)
	2. for julia. available z sets	
	3. available color sets
*/
void	use_message(void)
{
	write(0, "Use:\nFractals: (M)andelbrot, (J)ulia\n", 37);
	write(0, "(ONLY FOR JULIA) ", 17);
	write(0, "Available (J)ulia z values: 0, 1, 2\n", 37);
	//write(0, "Available colors\n", 17); // no color selection yet
	exit(0);
}
/*
	checks that are performed:
	- no parameters are provided: exit and message
*/
t_conf	parse(int argc, char *argv[])
{
	t_conf	result;
	int		z;		//might cause trouble because double = int or something

	if (argc == 1 || argc > 4)
		use_message();
	if (argv[1][0] == 'J' || argv[1][0] == 'M')
		result.set = argv[1][0];
	else
		use_message();
	if (argc >= 3)
	{
		z = ft_atoi(argv[2]);
		if ((result.set == 'J') && (z >= 0 && z <= 2))
			result.z = z;
		else
			use_message();
	}
	return (result);
}

