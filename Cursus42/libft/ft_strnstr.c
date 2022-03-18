/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:20:05 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/15 19:05:22 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	h;

	i = 0;
	h = 0;
	if (!len || ! big)
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	while (big[h] != 0)
	{
		i = 0;
		while (big[i + h] == little[i] && len > (h + i))
		{
			if (big[h + i] == 0 && (h + i) < len)
				return ((char *)&big[h]);
		i++;
		}
		if (little [i] == 0)
			return ((char *)&big[h]);
		h++;
	}
	return (NULL);
}
