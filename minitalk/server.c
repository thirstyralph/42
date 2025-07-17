#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#define END_TRANSMISSION '\0'

//debe lanzarse primero
// Debe mostrar su PID		
// Recibe string
// Muestra string
// Debe ser muy rapido, muy  rapido
	// Debe recibir strings de diferentes clientes consecutivamente sin reiniciar
// La comunicacion se hace SOLO con senales UNIX

/*
 * - [x] Display PID
 * - [ ] Create endless loop
 * - [ ] Receive signals
 * - [ ] Dcrypt signals
 * - [ ] take action for each signal received
*/

char	btoi(char	*signal, char zero)
{
	char	character;
	int		i;
	int		multiplier;

	i = 7;
	multiplier = 1;

	while (multiplier >= 0)
	{
		character = character + ((signal[i] - zero) * multiplier);
		multiplier =  multiplier * 2;
		i--;
	}
	return (character);
}

void	handle1()
{
	write(STDOUT_FILENO,"signal 1 received\n", 17);

}

void	handle2()
{
	write(STDOUT_FILENO,"signal 2 received\n", 17);
}

void	handle_interrupt()
{
	write(STDOUT_FILENO,"interrupt received\n", 19);
	exit(0);
}

int	main()
{

	signal(SIGINT, handle_interrupt);
	signal(SIGUSR1, handle1);
	signal(SIGUSR2, handle2);

	pid_t	pid;

	// define el pid y lo imprime
	pid = getpid();
	printf("PID = %i\n", pid);	
	while (1)
	{
		sleep(1);
	}
	return (0);
}
