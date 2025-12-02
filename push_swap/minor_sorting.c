/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:12:03 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:05:17 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	if (!a || a->size < 3)
		return ;
	x = a->array[0];
	y = a->array[1];
	z = a->array[2];
	if (x < y && x < a->array[2] && y > z)
	{
		sa(a);
		ra(a);
	}
	else if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && x > z && y > z)
		rra(a);
	else if (x > y && y > z && x > z)
	{
		sa(a);
		rra(a);
	}
}

int	find_min_index(t_stack *a)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (i < a->size)
	{
		if (a->array[i] < a->array[min])
			min = i;
		i++;
	}
	return (min);
}

void	move_min(t_stack *a)
{
	int	min;

	min = find_min_index(a);
	while (min != 0)
	{
		if (min <= a->size / 2)
		{
			ra(a);
			min--;
		}
		else
		{
			rra(a);
			min++;
			if (min == a->size)
				min = 0;
		}
	}
}

void	sort_four(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	move_min(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	i;

	if (!a || !b)
		return ;
	i = 0;
	while (i < 2)
	{
		move_min(a);
		pb(a, b);
		i++;
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
