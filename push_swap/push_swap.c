/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:14:37 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 14:06:05 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_arrays(t_stack *a, t_stack *b)
{
	if (a && a->array)
		free (a->array);
	if (b && b->array)
		free (b->array);
	return ;
}

void	sorting(t_stack *a, t_stack *b)
{
	if (!a ||!b)
		return ;
	if (is_sorted(a))
		return ;
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 5)
		sort_five(a, b);
	else
	{
		index_numbers(a);
		radix_sorting(a, b);
	}
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		i;

	if (ac == 1)
		return (0);
	if (!is_valid(ac, av))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	build_stack(&a, av, ac);
	if (!a.array)
		return (0);
	b.array = malloc(a.size * (sizeof(int)));
	if (!b.array)
	{
		free_arrays (&a, &b);
		return (0);
	}
	b.size = 0;
	sorting(&a, &b);
	free_arrays(&a, &b);
}
