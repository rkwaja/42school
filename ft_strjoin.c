/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:29:56 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/19 18:29:59 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, len1);
	ft_memcpy(&new[len1], s2, len2);
	new[len1 + len2] = '\0';
	return (new);
}
/*int	main(void)
{
	char const *s1 = "RAZAN";
	char const *s2 = "ALKHWAJA";
	char *test = ft_strjoin(s1, s2);
	printf("%s\n", test);
}*/
