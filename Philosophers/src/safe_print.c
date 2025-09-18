/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:18:03 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/17 18:38:48 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

inline long unsigned	interval(struct timeval start)
{
	long unsigned	zero;
	struct timeval	end;

	zero = start.tv_sec * 1000 + start.tv_usec;
	gettimeofday(&end, NULL);
	return (((end.tv_sec * 1000) + end.tv_usec) - zero);
}

void	safe_print(int philosopher, int action, struct timeval start)
{
	printf("%lu %d ", interval(start), philosopher);
	if (action == 0)
		printf("has taken a fork");
	if (action == 1)
		printf("is eating");
	else if (action == 2)
		printf("is thinking");
	else if (action == 3)
		printf("is sleeping");
	else if (action == 4)
		printf("has died");
	printf("/n");
}
