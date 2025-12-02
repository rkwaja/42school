/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:36:02 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/03 13:36:41 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	n;
	int		counter;

	counter = 0;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		counter++;
	}
	if (n >= 10)
	{
		counter = counter + ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	counter++;
	return (counter);
}
