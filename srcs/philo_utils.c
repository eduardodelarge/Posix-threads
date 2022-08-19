/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:07:21 by caeduard          #+#    #+#             */
/*   Updated: 2022/08/19 14:18:45 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
/@brief: converts the value of argv to an integer
/@param: char **argv
/@return: conversion of argv to int
*/

int convert_args(char **argv)
{
	argv->argv[0] = ft_atoi(argv[0]);
	
}