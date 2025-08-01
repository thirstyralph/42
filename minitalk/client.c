/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:02:31 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 18:00:34 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdio.h>

/* Send
 * @brief: Sends the binary balues of a given byte through system signals to a 
 * specified PID.
 * arguments:
 * pid:	PID of the process we wish to comunicate to.
 * c:	Character we are going to send.
 * NOTES:
 */
void	send(pid_t pid, unsigned char c)
{
	unsigned char	temp;
	int				i;

	i = 8;
	temp = c;
	while (i > 0)
	{
		i--;
		temp = c >> i;
		if (temp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char *argv[])
{
	char	*msg;
	pid_t	pid;
	int		i;

	i = 0;
	if (argc != 3)
		return (ft_printf("Usage: <PID> <message> \n"), 1);
	pid = ft_atoi(argv[1]);
	msg = argv[2];
	ft_printf("Sending message to PID:%d\n", pid);
	while (msg[i])
		send(pid, msg[i++]);
	send(pid, 0);
	return (0);
}
