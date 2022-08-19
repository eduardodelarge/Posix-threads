/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:57:03 by caeduard          #+#    #+#             */
/*   Updated: 2022/08/19 14:23:20 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void is_eating(t_philo *philo)
{
	philo->eating = 1;
	philo->eating_count++;
	philo->eating_time = get_time();
}

int main(int ac, char **av)
{
	pthread_t *threads;

	pthread_create(&threads, NULL, &is_eating, NULL);
	pthread_join(threads, NULL);
	return (0);
}