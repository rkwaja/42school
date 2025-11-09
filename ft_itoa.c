/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:13:53 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/20 16:03:36 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	long int	nbr;
	int			i;

	i = 1;
	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		i++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*str;

	len = n_len(n);
	nbr = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	len--;
	while (nbr > 9)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	str[len] = nbr + '0';
	return (str);
}
/*int	main (void)
{
	int n = 0;
	char *res = ft_itoa(n);
	printf("%s", res);
}*/
