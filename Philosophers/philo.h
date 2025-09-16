#ifndef PHILO_H

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

//ft_atoi.c
int				ft_atoi(const char *nptr);
//routine.c
void			*_philo_routine(void *arg);
//spawn_threads.c
pthread_t		*spawn_threads(uint32_t n);
//forks.c
pthread_mutex_t	*init_forks(uint32_t n);
//parse.c
void			print_usage(void);
t_conf			parse(int argc, char *argv[]);
//main.c
long unsigned	interval(struct timeval start);
#endif
