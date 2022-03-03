/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:19:35 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/03 16:19:35 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
   int  i;

   i = 0;
   while (str[i] != c && str[i] != '\0')
   {
       i++;
       if(str[i] == c)
       {
           return ((char *)str + i);
       }
   } 
   return (0);
}