/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:20:00 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:20:00 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && str1 && str2)
    {
        if(str1[i] != str2[i])
        {
            if(str1[i] > str2[i])
            {
                return(1);
            }
            return(-1);
        }
        i++;
    }
    return (0);
}