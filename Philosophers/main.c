
typedef struct s_conf {
	uint32_t	n;		//number of philosophers
	uint32_t	ttd;	//time to die
	uint32_t	tte;	//time to eat
	uint32_t	tts;	// time to sleep
	uint32_t	limit;	// max number of times for the philosophers to eat
}	t_conf;

void	notification(uint32_t philo, uint32_t action)
{
	//timestamp_in_ms philo has done this action or another;
}
/*
 #	must take:
	- number_of_philosophers
	- time_to_die
	- time_to_eat
	- time_to_sleep
	- number_of_times_each_philosopher_must_eat
int	main(int argc, char *argv[])
{
	
	return (0);
}
