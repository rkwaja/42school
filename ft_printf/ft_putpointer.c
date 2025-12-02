/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:53:44 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/04 17:53:46 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *p)
{
	int	counter;

	if (p == (NULL))
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	counter = 2;
	counter = counter + ft_puthexasmall((unsigned long)p);
	return (counter);
}
