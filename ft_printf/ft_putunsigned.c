/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:47:08 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/03 14:23:39 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int	counter;

	counter = 0;
	if (nbr >= 10)
	{
		counter = counter + ft_putunsigned(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
	counter ++;
	return (counter);
}
