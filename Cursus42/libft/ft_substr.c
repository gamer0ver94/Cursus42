/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:27:11 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/15 17:19:41 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	newstr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		if (i < len && start <= ft_strlen(s))
		{
			newstr[i] = s[i + start];
		}
		i++;
	}
	if(start > ft_strlen(s))
		newstr[0] = 0;
	else
		newstr[len] = '\0';
	return (newstr);	
}
