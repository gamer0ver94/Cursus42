/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:59:19 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/15 17:24:36 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	indexfind(char const *s, char c, int index)
{
	int	j;

	j = 0;
	while (s[index] == c)
	{
		index++;
	}
	while (s[index + j] != c)
	{
		j++;
	}
	return (j + index);
}

char	*copyword(char const *s, char *str, int index, char c)
{
	int	j;

	j = 0;
	while (s[index + j] == c)
	{
		index++;
	}
	while (s[index + j] != c && s[index + j] != 0)
	{
		str[j] = s[index + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	numberofwords(char const *s, char c)
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
			if (s[i + 1] == c || s[i + 1] == 0)
			{
				words++;
			}
			i++;
		}
	}
	return (words);
}

int	wordlenght(char const *s, char c, int index)
{
	int	j;

	j = 0;
	while (s[index] == c)
	{
		index++;
	}
	while (s[index + j] != c)
	{
		j++;
	}
	return (j);
}

char	**allocatecpy(char const *s, char **str, char c, int words)
{
	int	i;
	int	index;
	int	wordl;

	i = 0;
	index = 0;
	wordl = wordlenght(s, c, 0);
	while (i < words)
	{
		str[i] = malloc(sizeof(char) * wordl + 1);
		if (!str[i])
		{
			return (NULL);
		}
		copyword(s, str[i], index, c);
		index = indexfind(s, c, index);
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		words;

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
		allocatecpy(s, str, c, words);
		i++;
	}
	str[words] = 0;
	return (str);
}
