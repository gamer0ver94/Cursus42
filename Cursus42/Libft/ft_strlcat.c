/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:19:47 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:19:47 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    int lenght;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while(i < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    lenght = i + j;
    return (lenght);
}

//continue test