/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:06 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/12 03:21:11 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_small_num(t_list **stack_a)
{
	t_list	*tmp;
	int		small_num;

	tmp = *stack_a;
	if (*stack_a)
		small_num = *(int *)tmp->content;

	while (tmp)
	{
		if (small_num > *(int *)tmp->content)
		{
			small_num = *(int *)tmp->content;
		}
		tmp = tmp->next;
	}
	return (small_num);
}

void	sort_big_num(t_list **stack_a, t_list **stack_b, int size)
{
	int	small_num;

	small_num = find_small_num(stack_a);
	while (*stack_a != NULL)
	{
		if (*(int *)(*stack_a)->content == small_num)
		{
			push_rules(stack_a, stack_b, "pb");
			small_num = find_small_num(stack_a);
		}
		else
		{
			if (smart_rotate(stack_a, small_num, size) == 1)
				rotate_rules(stack_a,stack_b, "ra");
			else
				reverse_rules(stack_a, stack_b, "rra");
		}
	}
	while (*stack_b)
	{
		push_rules(stack_a, stack_b, "pa");
	}
}
