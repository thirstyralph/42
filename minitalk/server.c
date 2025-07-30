/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:02:05 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/30 16:02:11 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

/*
 * @brief: Turns the given signals into character values through
 * bitwise operators.
 * Sig: Signal that will be translated into binary values.
 */
void	signal_handler(int sig)
{
	static unsigned char	current_char = 0;
	static unsigned int		i = 0;

	i++;
	current_char = current_char << 1;
	if (sig == SIGUSR1)
		current_char++;
	if (i >= 8)
	{
		i = 0;
		ft_putchar(current_char);
		if (current_char == 0)
			ft_putchar('\n');
	}
}

/*
 *	@brief: Prints an interrupt message and exits the program safely.

void	handle_interrupt()
{
	write (STDOUT_FILENO, "interrupt received\n", 19);
	exit(0);
}
 */
int	main(void)

{
	pid_t	pid;

	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	pid = getpid();
	ft_printf("PID = %i\n", pid);
	while (1)
	{
		sleep(1);
	}
	return (0);
}
