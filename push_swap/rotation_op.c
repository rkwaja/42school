/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 16:29:06 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:03:01 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *array, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	i = 0;
	tmp = array[i];
	while (i < size - 1)
	{
		array[i] = array[i + 1];
		i++;
	}
	array[size - 1] = tmp;
}

void	ra(t_stack *a)
{
	if (!a)
		return ;
	rotate(a->array, a->size);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	if (!b)
		return ;
	rotate(b->array, b->size);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	if (!b || !a)
		return ;
	rotate(a->array, a->size);
	rotate(b->array, b->size);
	write(1, "rr\n", 3);
}
