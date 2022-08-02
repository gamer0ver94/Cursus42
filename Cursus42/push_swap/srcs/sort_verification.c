/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_verification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:13:44 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/31 04:40:38 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int binary_to_int(char *bin)
{
	int i;
	int size;
	int res;

	res = 0;
	i = 1;
	size = ft_strlen(bin) - 1;
	while (bin[size])
	{
		if (bin[size] == '1')
			res += i;
		i *= 2;
		size--;
	}
	return (res);
}

int	sort_verification(t_list **list, int size)
{
	t_list	*current;

	current = *list;
	if (ft_lstsize(*list) != size)
		return (1);
	while (current->next != NULL)
	{
		if (current->next->content != NULL)
		{
			if (binary_to_int(current->content) > binary_to_int(current->next->content))
			{
				// printf("is not sorted\n");
				return (1);
			}
		}
		current = current->next;
	}
	printf("is sorted\n");
	return (0);
}
