/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:34:23 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/19 18:36:40 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	a;
	size_t	z;

	if (s1 == NULL || set == NULL)
		return (NULL);
	a = 0;
	z = ft_strlen(s1);
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (z > a && ft_strchr(set, s1[z - 1]))
		z--;
	new = (char *)malloc(sizeof(char) * (z - a + 1));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1 + a, z - a);
	new[z - a] = '\0';
	return (new);
}
/*int main ()
{
	char const *s1;
	char const *set;
	s1 = "rrrrrrrr";
	set = "rr";
	char *output = ft_strtrim(s1, set);
	printf("%s\n", output);
}*/
