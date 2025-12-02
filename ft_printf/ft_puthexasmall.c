/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexasmall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:52:44 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/04 17:52:45 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexasmall(unsigned long n)
{
	char	*s;
	int		counter;

	s = "0123456789abcdef";
	counter = 0;
	if (n >= 16)
		counter = counter + ft_puthexasmall(n / 16);
	ft_putchar(s[n % 16]);
	counter++;
	return (counter);
}
