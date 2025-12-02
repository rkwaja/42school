/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:16:11 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/11/30 01:08:35 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str)
{
	int	i;

	if (!str || !str[0])
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(char *s)
{
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	return (num * sign);
}

int	ft_isduplicate(int ac, char **av)
{
	int		i;
	int		j;
	long	n1;
	long	n2;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		n1 = ft_atoi(av[i]);
		while (j < ac)
		{
			n2 = ft_atoi(av[j]);
			if (n1 > INT_MAX || n1 < INT_MIN || n2 > INT_MAX || n2 < INT_MIN)
				return (1);
			if (n1 == n2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_valid(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	if (ft_isduplicate(ac, av))
		return (0);
	return (1);
}
