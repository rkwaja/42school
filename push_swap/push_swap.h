/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:07:05 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/12/01 11:21:25 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*array;
	int	size;
}		t_stack;

int		ft_isdigit(char *str);
long	ft_atoi(char *s);
int		ft_isduplicate(int ac, char **av);
int		is_valid(int ac, char **av);
char	**ft_split(char *str, char sep);
int		is_sorted(t_stack *a);

void	swap(int *array, int size);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	rotate(int *array, int size);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	ra(t_stack *a);

void	rev_rotate(int *array, int size);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

void	build_stack(t_stack *a, char **av, int ac);
void	free_arrays(t_stack *a, t_stack *b);

void	sort_three(t_stack *a);
int		find_min_index(t_stack *a);
void	move_min(t_stack *a);
void	sort_four(t_stack *a, t_stack *b);
void	sort_five(t_stack *a, t_stack *b);

void	sort_copy(int *arr, int size);
void	radix_sorting(t_stack *a, t_stack *b);
void	index_numbers(t_stack *a);
int		ft_max_bits(t_stack *stack);
void	ft_arraycpy(int *copy, int *array, int size);
#endif
