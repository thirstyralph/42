#include "lib/MLX42/include/MLX42/MLX42.h"
#include <unistd.h>
#include <stdlib.h>
#define WIDTH 256
#define HEIGHT 256

/**
 * Main MLX handle, carries important data in regards to the program.
 * @param window The window itself.
 * @param context Abstracted opengl data.
 * @param width The width of the window.
 * @param height The height of the window.
 * @param delta_time The time difference between the previous frame and the current frame.

typedef struct mlx
{
	void*		window;
	void*		context;
	int32_t		width;
	int32_t		height;
	double		delta_time;
}	mlx_t;
 */

typedef struct config
{
	int		set;
	int		z;
}	t_conf;

//functions
//main.c
int	main(int argc, char *argv[]);
//parse
void	use_msg(void);
t_conf	parse(int argc, char *argv[]);
//utils
uint32_t	offset(int x, int y, mlx_t data);

