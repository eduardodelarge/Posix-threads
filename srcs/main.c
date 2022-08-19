/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:45:35 by caeduard          #+#    #+#             */
/*   Updated: 2022/08/09 20:28:37 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "philo.h"
// The specific rules for the philosophers are:
// • Each philosopher should be a thread.
// • There is one fork between each pair of philosophers. Therefore, if there are several
// philosophers, each philosopher has a fork on their left side and a fork on their right
// side. If there is only one philosopher, there should be only one fork on the table.
// • To prevent philosophers from duplicating forks, you should protect the forks state
// with a mutex for each of them.