/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:28:53 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/04 12:05:50 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_list *stack_a, t_list *stack_b)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = stack_a;
	list_b = stack_b;
	if (list_a != NULL)
	{
		printf("STACK A\n");
		while (list_a->next != NULL)
		{
			printf("%d\n", *(int *)list_a->content);
			list_a = list_a->next;
		}
		printf("%d\n\n\n", *(int *)list_a->content);
	}
	if (list_b != NULL)
	{
		printf("STACK B\n");
		while (list_b->next != NULL)
		{
			printf("%d\n", *(int *)list_b->content);
			list_b = list_b->next;
		}
		printf("%d\n\n", *(int *)list_b->content);
	}
	else
		printf("STACK B\nempty\n\n");
}

