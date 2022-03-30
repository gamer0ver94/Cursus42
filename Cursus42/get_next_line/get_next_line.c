/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:48:19 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/30 08:48:19 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h" //delete after

char	*get_remaining(char *stash)
{
	char	*remaining;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash && stash[i] && stash[i] != '\n')
		i++;
	if (!stash)
	{
		return (NULL);
	}
	remaining = malloc(sizeof(char) * (ft_strlen(stash) - i) + 1);
	if (!remaining)
		return (0);
	while (stash[i + j])
	{
		remaining[j] = stash[i + j + 1];
		j++;
	}
	remaining[j] = '\0';
	free(stash);
	return (remaining);
}

char	*get_line(char *stash)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash && stash[i] && stash[i] != '\n')
	{
		i++;
	}
	line = malloc(sizeof(char) * i + 1);
	if (!stash && i == 0)
	{
		free (line);
		return (NULL);
	}
	while (j != i)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*read_nbytes(int fd, char *stash)
{
	char	*buffer;
	int		reader;

	reader = 1;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (verifybuffer(buffer) != 1 && reader != 0)
	{
		reader = read(fd, buffer, BUFFER_SIZE);
		if (reader == -1 || reader == 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[reader] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	stash = read_nbytes(fd, stash);
	line = get_line(stash);
	stash = get_remaining(stash);
	return (line);
}
