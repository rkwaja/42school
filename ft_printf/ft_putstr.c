/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:34:26 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/03 13:35:09 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		ft_putchar(*s);
		s++;
		counter++;
	}
	return (counter);
}
