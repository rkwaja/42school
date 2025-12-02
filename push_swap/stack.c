/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:26:58 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 12:57:18 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	build_stack(t_stack *a, char **av, int ac)
{
	int	i;

	a->array = malloc(sizeof(int) * ac);
	if (!a->array)
		return ;
	a->size = 0;
	i = 1;
	while (i < ac)
	{
		a->array[a->size] = ft_atoi(av[i]);
		i++;
		a->size++;
	}
}

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->array[i] > a->array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
