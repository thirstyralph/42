#include "../fractol.h"

/*
	zn = zn-1^2 + c
	mandelbrot:
		Calculates the number of iterations of the equation for it to grow
		out of bounds.
	takes:
		complex c: Value of C
		int limit: maximum number of operations to perform.
	returns:
		int: Number of iterations 
*/
int	mandelbrot(t_complex c, int limit)
{
	t_complex	tmp;
	int			i;

	i = 0;
	tmp = c;
	while (mod_squared(tmp) < 2 && i <= limit)
	{
		
	}
}
mandelbrot_loop(

