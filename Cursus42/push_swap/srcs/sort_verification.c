/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_verification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:13:44 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/04 12:17:19 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_verification(t_list **list)
{
	t_list	*current;

	current = *list;
	while (current->next != NULL)
	{
		if (current->next->content != NULL)
		{
			if (*(int *)current->content > *(int *)current->next->content)
			{
				printf("is not sorted\n");
				return (1);
			}
		}
		current = current->next;
	}
	printf("is sorted\n");
	return (0);
}
