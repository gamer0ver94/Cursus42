/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:19:17 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/09 15:56:38 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)str;
	i = 0;
	while (i < n)
	{
		if (string[i] == c)
		{
			return (string + i);
		}
		i++;
	}
	return (0);
}
