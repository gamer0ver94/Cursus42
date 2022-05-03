/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:48:14 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/03 18:51:00 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*str;
	int		i;
	int		j;
	int		str_len;

	printf("%d", ft_strlen(stash));
	str_len = ft_strlen(stash) + ft_strlen(buffer);
	j = 0;
	i = 0;
	str = malloc(sizeof(char) * str_len + 1);
	while (stash[i])
	{
		str[j] = stash[i];
		j++;
		i++;
	}
	i = 0;
	while (buffer[i])
	{
		str[j] = buffer[i];
		j++;
		i++;
	}
	str[str_len] = '\0';
	free(stash);
	return (str);
}

int	get_line_return(char *buffer, char n)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == n)
			return (1);
		i++;
	}
	return (0);
}
