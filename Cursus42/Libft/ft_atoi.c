/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:18:48 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:22:06 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int res;
    
    res = 0;
    i = 0;
    if(str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
    while(str[i] != 0)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return (res);
        }
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res);
}