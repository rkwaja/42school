/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 19:18:47 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:04:11 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *array, int size)
{
	int	tmp;

	if (!array || size < 2)
		return ;
	tmp = array[0];
	array[0] = array[1];
	array[1] = tmp;
}

void	sa(t_stack *a)
{
	if (!a)
		return ;
	swap(a->array, a->size);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	if (!b)
		return ;
	swap(b->array, b->size);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	if (!b || !a)
		return ;
	swap(a->array, a->size);
	swap(b->array, b->size);
	write(1, "ss\n", 3);
}
