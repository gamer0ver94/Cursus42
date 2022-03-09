/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:20:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/08 04:28:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int mallocount(char *s1, char *set)
{
     int i;
    int j;
    int count;
    int size;

    j = 0;
    i = 0;
    count = 0;
    size = ft_strlen(set) - 1;
    while (s1[i])
    {
        while(s1[i] == set[j] && s1[i + size] == set[size])
        {
            if(s1[i + size] == set[size])
            {
                size--;
            }
            if(size == 0)
            {
                size = ft_strlen(set);
                i = i + size;
                size = size - 1;
            }
        }
        count++;
        i++;
    }
   return(count);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int h;
    char *newstr;
    int size;

    h = 0;
    newstr = (char *)malloc(sizeof(char) * mallocount((char *)s1, (char *)set));
    j = 0;
    i = 0;
    size = ft_strlen(set) -1;
    while (s1[i])
    {
        while(s1[i] == set[j] && s1[i + size] == set[size])
        {
            if(s1[i + size] == set[size])
            {
                size--;
            }
            if(size == 0)
            {
                size = ft_strlen(set);
                i = i + size;
                size = size - 1;
            }
        }
        newstr[h] = s1[i];
        i++;
        h++;
    }
    return (newstr);
}