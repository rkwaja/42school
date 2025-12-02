/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:40:01 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/09/03 14:17:40 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	what_type(const char *type, int i, va_list ap)
{
	int	counter;

	counter = 0;
	if (type[i] == 'c')
		counter = ft_putchar(va_arg(ap, int));
	else if (type[i] == 's')
		counter = ft_putstr(va_arg(ap, char *));
	else if ((type[i] == 'i' || type[i] == 'd'))
		counter = ft_putnbr(va_arg(ap, int));
	else if (type[i] == 'u')
		counter = ft_putunsigned(va_arg(ap, unsigned int));
	else if (type[i] == 'x')
		counter = ft_puthexasmall(va_arg(ap, unsigned int));
	else if (type[i] == 'X')
		counter = ft_puthexacapital(va_arg(ap, unsigned int));
	else if (type[i] == 'p')
		counter = ft_putpointer(va_arg(ap, void *));
	else if (type[i] == '%')
		counter = ft_putchar(type[i]);
	return (counter);
}

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(ap, type);
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			counter = counter + what_type(type, i, ap);
			i++;
		}
		else
		{
			write(1, &type[i], 1);
			i++;
			counter++;
		}
	}
	va_end(ap);
	return (counter);
}
