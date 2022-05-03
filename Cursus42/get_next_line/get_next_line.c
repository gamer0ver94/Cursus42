/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:21:20 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/03 18:31:07 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*save_remain(char *line)
{
	char	*remain;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i] != '\n')
	{
		i++;
	}
	remain = malloc(sizeof(char) * (ft_strlen(line) - i) + 1);
	if (line[i] == '\n')
	{
		while (line[i])
		{
			remain[j] = line[i];
			i++;
			j++;
		}
		remain[i] = 0;
		return (remain);
	}
	free(remain);
	return (NULL);
}

char	*read_line(int fd)
{
	int		bytes_to_read;
	char	*buffer;
	char	*stash;

	bytes_to_read = 1;
	while (bytes_to_read > 0)
	{
		buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
		bytes_to_read = read(fd, buffer, BUFFER_SIZE);
		buffer[BUFFER_SIZE] = 0;
		if (bytes_to_read == -1 || bytes_to_read == 0)
		{
			free(buffer);
			return (NULL);
		}
		stash = ft_strjoin(stash, buffer);
		free(buffer);
		if (get_line_return(stash, '\n') == 1)
		{
			printf("hello");
			return (stash);
		}
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	line = read_line(fd);
	if (!line)
		return (NULL);
	save = save_remain(line);
	return (line);
}
