/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:20:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 19:23:46 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int countfunction(char *s1, char *set)
{
     int i;
    int j;
    int count;

    j = 0;
    i = 0;
    count = 0;
    while(s1[i])
    {
       while(s1[i] == set[j])
       {
           i++;
           j++;
           count++;
       }
       if(s1[i] != ft_strlen(set))
       {
           count = count -j;
           j = 0;
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
    newstr = (char *)malloc(sizeof(char) * 10);
    j = 0;
    i = 0;
    size = ft_strlen(set);
    while (s1[i] - 1)
    {
        while(s1[i + 1] == set[j] && s1[i + size] == set[size)])
        {
            if(s1[i + size] == set[size]))
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
        newstr[h] = s1[1];
        i++;
    }
}







///test

// char *ft_strtrim(char const *s1, char const *set)
// {
//     int i;
//     int j;
//     int h;
//     char *newstr;
//     int size;

//     h = 0;
//     newstr = (char *)malloc(sizeof(char) * 20);
//     j = 0;
//     i = 0;
//     size = strlen(set) - 1;
//     while (s1[i])
//     {
//         while((s1[i] == set[j]) && (s1[i + size] == set[size]))
//         {
//             if(s1[i + size] == set[size])
//             {
//                 size--;
//             }
//             if(size == 0)
//             {
//                 size = strlen(set);
//                 i = i + size;
//                 size = size - 1;
//             }
//         }
//         newstr[h] = s1[i];
//         h++;
//         i++;
//     }
// }