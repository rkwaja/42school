/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexacapital.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:53:29 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/04 17:53:31 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexacapital(unsigned long n)
{
	char	*s;
	int		counter;

	s = "0123456789ABCDEF";
	counter = 0;
	if (n >= 16)
		counter = counter + ft_puthexacapital(n / 16);
	ft_putchar(s[n % 16]);
	counter++;
	return (counter);
}
