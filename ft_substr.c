/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:31:00 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/19 18:31:47 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s <= start)
	{
		new = (char *)malloc(sizeof(char) * 1);
		if (new == NULL)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len > len_s - start)
		len = len_s - start;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s + start, len);
	new[len] = '\0';
	return (new);
}
