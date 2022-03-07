/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:19:28 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:19:28 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t size)
{
    size_t i;
    char *destination;
    char *source;

    if(!dest || !src)
    {
       return (0);
    }
    i = 0; 
    destination = (char*)dest;
    source = (char*)src;
    while(i < size)
    {
            destination[i] = source[i];
            i++;
    }
    return (dest);
}
