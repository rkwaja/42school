/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:18:36 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/08/31 09:56:59 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	free_result(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

static char	**fill_result(char **result, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	while (i < words)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		result[i] = ft_substr(s, start, end - start);
		if (!result[i])
		{
			free_result(result, i);
			return (NULL);
		}
		start = end;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	return (fill_result(result, s, c, word_count));
}
/*
int main ()
{
	char *s = "razan ismail alkhwaja";
	char c = ' ';
	char **words;

	words = ft_split(s, c);
	int i  = 0;
	printf("%s'\n'",s );

		while (ft_split(s, c)[i])
		{
		printf("%s\n", ft_split(s, c)[i]);
		i++;
		}
		while (words[i])
	{
		printf("ft_split[%d]: \"%s\"\n", i, words[i]);
		i++;
	}
}*/
