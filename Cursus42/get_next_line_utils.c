/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:48:00 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/30 08:48:00 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	int		lenght;
	size_t	i;

	i = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (0);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * lenght + 1);
	if (!newstr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		newstr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	newstr[lenght] = '\0';
	free(s1);
	return (newstr);
}

char	*verifybuffer(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
