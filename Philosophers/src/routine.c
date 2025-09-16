#include "../philo.h"

void	*_philo_routine(void *arg)
{
	int	*i;

	i = (int *)arg;
	printf("hello there!thread number %d has  pthred ID %lu\n",*i, pthread_self());
	printf("Philosopher %d is thinking", *i);
	sleep(1);
	printf("Philosopher %d is eating", *i);
	sleep(1);
	printf("Philosopher %d is sleeping", *i);
	sleep(1);
	free(i);
	return (NULL);
}
