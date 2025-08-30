#include "../fractol.h"

uint32_t	offset(int x, int y, mlx_t data)
{
	return ((y * data.width) + (x * 4));
}
