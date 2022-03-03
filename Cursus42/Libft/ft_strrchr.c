/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:20:08 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:20:08 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    while (str[i] != c && i != 0)
    {
        i--;
        if (str[i] == c)
        {
            return ((char*)str + i);
        }
    }
    return (0);
}