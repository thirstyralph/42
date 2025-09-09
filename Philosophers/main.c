#include <pthread.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>

typedef struct s_conf {
	uint32_t	n;		//number of philosophers
	uint32_t	ttd;	//time to die
	uint32_t	tte;	//time to eat
	uint32_t	tts;	// time to sleep
	uint32_t	limit;	// max number of times for the philosophers to eat
}	t_conf;

void	notification(uint32_t philo, uint32_t action)
{
		printf("polla");
	//timestamp_in_ms philo has done this action or another;

}

int	main(void)
{
	struct timeval	start;

	gettimeofday(&start, NULL);
	printf("son las %lu.", start.tv_sec);
	printf("%lu en punto\n", start.tv_usec);
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
