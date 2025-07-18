#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdio.h>

/*
 *	send
 * Send a message to a specified PID, encoded with SIGUSR 1 and 2
 * sig1: Char value to detect and send SIGUSR1
 * sig2: Char value to detect and send SIGUSR2
 * str:  String to read from
 * return value: Number of sent bits;
 */
int	send(pid_t pid, char sig1, char sig2, char *str)
{
	int	i;

	i = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == sig1)
			kill(pid, SIGUSR1);
		else if (str[i] == sig2)
			kill(pid, SIGUSR2);
		i++;
	}
	return (i);
}

char	*itob(char c)
{
	char	*result;
	int		remainder;
	int		position;

	result = malloc(sizeof(char) * 9);
	if (!result)
		return (NULL);
	result[8] = 0;
	position = 7;
	remainder = c;
	while (remainder >= 2)
	{
		result[position] = 48 + (remainder % 2);
		remainder = remainder / 2;
		position -= 1;
	}
	result[position] = '0' + (remainder % 2);
	while (position > 0)
	{
		position -= 1;
		result[position] = '0';
	}
	return (result);
}

// puede que fuese mejor usar append en este caso... probare de las dos maneras
char	*encoder(char *str)
{
	int		i;
	char	*message;
	char	*letter;
	char	*tmp;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[i])
	{
		letter = itob(str[i]);
		tmp = ft_strjoin(message, letter);
		message = tmp;
		free(tmp);
		free(letter);
		i++;
	}
	return (message);
}

void	error_message(int errno)
{
	ft_printf("ERROR:\n");
	if (errno == 1)
		ft_printf("- Missing parameters\n");
}

int	main(int argc, char *argv[])
{
	char	*msg;
	pid_t	pid;

	if (argc < 2)
		return (error_message(1), 1);
	pid = atoi(argv[1]);
	msg = encoder(argv[2]);
	send(pid, SIGUSR1, SIGUSR2, msg);
	free(msg);
	return (0);
}
