/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:35:11 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/12 15:46:17 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int main()
{
	int	i = 0;
	int	n = 2;
	char str[15] = "razan alkhwaja";
	printf("\nBefore ft_bzero():%s\n", str);
	ft_bzero(str, n);
	while (i < n)
	{
		printf("\nAfter ft_bzero():%d", str[i]);
		i++;
	}
	return (0);
}*/
