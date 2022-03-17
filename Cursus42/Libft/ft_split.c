/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:59:19 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/17 15:35:20 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	indexfind(const char *s, char c, int index)
{
	int	j;

	j = 0;
	while (s[index] == c)
	{
		index++;
	}
	while (s[index + j] != c && s[index + j] != '\0')
	{
		j++;
	}
	return (j + index);
}

char	numberofwords(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		if (s[i] != c && s[i] != 0)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				words++;
			}
			i++;
		}
	}
	return (words);
}

int	wordlenght(const char *s, char c, int index)
{
	int	j;

	j = 0;
	while (s[index] == c)
	{
		index++;
	}
	while (s[index + j] != c && s[index + j] != '\0')
	{
		j++;
	}
	return (j);
}

char	**allocatecpy(const char *s, char **str, char c, int index)
{
	int	wordl;
	int	j;
	int	i;

	i = 0;
	if (str[i])
	{
		while (str[i])
			i++;
	}
	wordl = wordlenght(s, c, index);
	str[i] = malloc(sizeof(char) * wordl + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s[index + j] == c)
		index++;
	while (s[index + j] != c && s[index + j] != 0)
	{
		str[i][j] = s[index + j];
		j++;
	}
	str[i][j] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**str;
	int		words;
	int		index;

	index = 0;
	i = 0;
	if (!s)
	{
		return (0);
	}
	words = numberofwords(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
	{
		return (NULL);
	}
	while (i < words)
	{
		allocatecpy(s, str, c, index);
		index = indexfind(s, c, index);
		i++;
	}
	str[words] = 0;
	return (str);
}
