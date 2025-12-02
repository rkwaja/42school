/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 19:25:11 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:06:29 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(int *array, int size)
{
	int	i;
	int	tmp;

	if (!array || size < 2)
		return ;
	i = size - 1;
	tmp = array[i];
	while (i > 0)
	{
		array[i] = array[i - 1];
		i--;
	}
	array[0] = tmp;
}

void	rra(t_stack *a)
{
	if (!a)
		return ;
	rev_rotate(a->array, a->size);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	if (!b)
		return ;
	rev_rotate(b->array, b->size);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	if (!b || !a)
		return ;
	rev_rotate(a->array, a->size);
	rev_rotate(b->array, b->size);
	write(1, "rrr\n", 4);
}
