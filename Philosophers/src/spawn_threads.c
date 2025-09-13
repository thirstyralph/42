#include "../philo.h"

/*
	spawn_threads
	creates a thread array and initializes all of it's components
*/
pthread_t *spawn_threads(uint32_t n)
{
	pthread_t	*r;
	int			*tmp;
	uint32_t	i;

	i = 0;
	r = malloc(sizeof(pthread_t) * (n + 1));
	if (!r)
		return (NULL);
	while(i < n)
	{
		tmp = malloc(sizeof(int));
		printf("a tread has been born\n");
		*tmp = i;
		pthread_create(&r[i], NULL, _philo_routine, (void *)tmp);
		i++;
	}
	return (r);
}
