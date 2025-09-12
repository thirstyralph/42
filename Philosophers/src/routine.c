#include "../philo.h"

void	*_philo_routine(void *arg)
{
	(void)arg;
	printf("Hola, soy un proceso\n");
	sleep(1);
	pthread_exit(NULL);
	return (NULL);
}
