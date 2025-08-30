#include "../fractol.h"

//adition
t_complex	add(t_complex a, t_complex b)
{
	t_complex	r;

	r.re = a.re + b.re;
	r.im = a.im + a.im;
	return (r);
}

//multiplication
t_complex	mul(t_complex a, t_complex b)
{
	t_complex	r;

	r.re = a.re * b.re - (a.im * b.im);
	r.im = a.re * b.im + (a.im * b.re);
	return (r);
}

//modulus (magnitude)
t_complex	mod_squared(t_complex z)
{
	return (z.re * z.re + z.im * z.im);
}
