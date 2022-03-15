/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:04:43 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/09 19:04:43 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newcont;

newcont = (t_list *)malloc(sizeof(newcont));
	if (!newcont)
	{
		return (NULL);
	}
	newcont->content = content;
	newcont->next = NULL;
	return (newcont);
}
