/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:18:28 by marvin            #+#    #+#             */
/*   Updated: 2022/03/09 16:39:48 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = ft_strdup(s);
	if (!newstr)
	{
		return (NULL);
	}
	while (newstr[i])
	{
		newstr[i] = (*f)(i, newstr[i]);
		i++;
	}
	return (newstr);
}
