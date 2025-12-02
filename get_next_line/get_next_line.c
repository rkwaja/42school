/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:59:11 by rkhwaja           #+#    #+#             */
/*   Updated: 2025/10/26 10:44:26 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char *buf, char *saved_char)
{
	free (buf);
	free (saved_char);
}

static char	*ft_read(char *saved_char, int fd)
{
	char	*buf;
	ssize_t	char_counts;

	buf = ft_calloc(BUFFER_SIZE + 1, 1);
	if (!buf)
	{
		free(saved_char);
		return (NULL);
	}
	char_counts = 1;
	while (char_counts > 0 && !ft_strchr(saved_char, '\n'))
	{
		char_counts = read(fd, buf, BUFFER_SIZE);
		if (char_counts < 0)
		{
			ft_free(buf, saved_char);
			return (NULL);
		}
		buf[char_counts] = '\0';
		saved_char = ft_join(saved_char, buf);
		if (!saved_char)
			return (NULL);
	}
	free(buf);
	return (saved_char);
}

static char	*ft_line(char *saved_char)
{
	int		len;
	char	*line;

	len = 0;
	if (!saved_char || saved_char[len] == '\0')
		return (NULL);
	while (saved_char[len] && saved_char[len] != '\n')
		len++;
	line = ft_calloc(len + 2, 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, saved_char, len + 1);
	return (line);
}

static char	*trim_saved_char(char *saved_char)
{
	int		i;
	char	*new_saved;

	i = 0;
	if (!saved_char)
		return (NULL);
	while (saved_char[i] && saved_char[i] != '\n')
		i++;
	if (!saved_char[i])
	{
		free(saved_char);
		return (NULL);
	}
	new_saved = ft_strdup(saved_char + i + 1);
	free(saved_char);
	return (new_saved);
}

char	*get_next_line(int fd)
{
	static char	*saved_char;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!saved_char)
		saved_char = ft_strdup("");
	if (!saved_char)
	{
		free (saved_char);
		saved_char = NULL;
		return (NULL);
	}
	saved_char = ft_read(saved_char, fd);
	line = ft_line(saved_char);
	if (!line)
	{
		free(saved_char);
		saved_char = NULL;
		return (NULL);
	}
	saved_char = trim_saved_char(saved_char);
	return (line);
}
#include <stdio.h>
int main()
{
	int fd;
	char *str;
	fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("%s",str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);	
}
