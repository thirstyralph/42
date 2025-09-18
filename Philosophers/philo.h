/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:25:03 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/18 11:39:19 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/types.h>
# include <sys/time.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

typedef struct s_conf
{
	uint32_t	n;		//number of philosophers
	uint32_t	ttd;	//time to die
	uint32_t	tte;	//time to eat
	uint32_t	tts;	// time to sleep
	uint32_t	limit;	// max number of times for the philosophers to eat
}	t_conf;

typedef struct s_app
{
	t_conf			conf;
	struct timeval	start;
	pthread_mutex_t	*forks;	
	pthread_mutex_t	print;
}	t_app;

//safe_print.c
void			safe_print(int philosopher, int action, struct timeval start);
//ft_atoi.c
int				ft_atoi(const char *nptr);
//routine.c
void			*_philo_routine(void *arg);
//spawn_threads.c
pthread_t		*spawn_threads(uint32_t n);
//spawn_forks.c
pthread_mutex_t	*spawn_forks(uint32_t n);
//forks.c
pthread_mutex_t	*init_forks(uint32_t n);
//parse.c
void			print_usage(void);
t_conf			parse(int argc, char *argv[]);
//utils.c
t_app			unify(t_conf *conf, pthread_mutex_t *forks,
					pthread_mutex_t print);
//main.c
long unsigned	interval(struct timeval start);

#endif
