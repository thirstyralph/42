#include "../philo.h"

/*
void	notification(uint32_t philo, uint32_t action)
{
	//timestamp_in_ms philo has done this action or another;

}
*/

long unsigned	interval(struct timeval start)
{
	long unsigned	zero;
	struct timeval	end;


	zero = start.tv_sec * 1000 + start.tv_usec;
	gettimeofday(&end, NULL);
	return (((end.tv_sec * 1000) + end.tv_usec) - zero);
}


int	main(void)
{
	uint32_t	i;
	uint32_t	n;
	pthread_t	*threads;


	n = 16;
	threads = spawn_threads(n);
	if (!threads)
		return (1);
	i = 0;
	while (i < n)
	{
		pthread_join(threads[i], NULL);
		i++;
	}
	free(threads);
	return (0);
}
/*
 #	must take:
	- number_of_philosophers
	- time_to_die
	- time_to_eat
	- time_to_sleep
	- number_of_times_each_philosopher_must_eat
	Each philosopher can use his own fork and the one to his left.
	so philosoper 0 can use fork 0 and top - 1, philo 1 can use forks 1, and 0
# How I think I will make it:
		- I start each philosopher naming it with it's position
		- I create a fork for each philosopher, and put them in an array,
			when it is time for philosophers to eat, they check if forks are
			available for them and if so they lock them with mutex and use them
int	main(int argc, char *argv[])

{
	
	return (0);
}
*/
