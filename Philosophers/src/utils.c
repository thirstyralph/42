/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:24:36 by ranavarr          #+#    #+#             */
/*   Updated: 2025/09/17 21:07:04 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

t_app	unify(t_conf *conf, pthread_mutex_t *forks, pthread_mutex_t print)
{
	t_app	app;

	app.conf = *conf;
	app.forks = forks;
	app.print = print;
	return (app);
}
