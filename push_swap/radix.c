/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:06:54 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:01:03 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_copy(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_arraycpy(int *copy, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		copy[i] = array[i];
		i++;
	}
}

void	index_numbers(t_stack *a)
{
	int	*copy;
	int	i;
	int	j;

	copy = malloc(a->size * sizeof(int));
	if (!copy)
		return ;
	ft_arraycpy(copy, a->array, a->size);
	sort_copy(copy, a->size);
	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->array[i] == copy[j])
			{
				a->array[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(copy);
}

int	ft_max_bits(t_stack *stack)
{
	int	max;
	int	max_bits;
	int	i;

	max = 0;
	i = 0;
	while (i < stack->size)
	{
		if (stack->array[i] > max)
			max = stack->array[i];
		i++;
	}
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sorting(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	bit_postion;
	int	i;
	int	size;

	max_bits = ft_max_bits(a);
	bit_postion = 0;
	while (bit_postion < max_bits)
	{
		size = a->size;
		i = 0;
		while (i < size)
		{
			if (((a->array[0] >> bit_postion) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (b->size != 0)
			pa(a, b);
		bit_postion++;
	}
}
