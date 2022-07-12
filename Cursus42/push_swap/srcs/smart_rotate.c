/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 03:04:46 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/12 03:21:32 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	smart_rotate(t_list **stack_a, int small_num, int size)
{
	t_list	*tmp;
	int		rotate;
	int		reverse;

	tmp = *stack_a;
	rotate = 0;
	reverse = 0;
	while (*(int *)tmp->content != small_num)
	{
		rotate++;
		tmp = tmp->next;
	}
	reverse = size - rotate;
	if (rotate <= reverse)
		return (1);
	else
		return (2);
}