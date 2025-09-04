#include "../fractol.h"

int	valid_double(char *str)
{
	int	i;
	int	dot;

	i = 0;
	dot = 0;
	if (ft_strlen(str) > 32)
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] == '.' && dot == 0)
				dot++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
