/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:06:45 by dpaulino          #+#    #+#             */
/*   Updated: 2022/07/04 18:15:51 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_three(t_list **stack_a, t_list **stack_b, int size)
{
	while (sort_verification(stack_a) == 1 || ft_lstsize(*stack_a) != size)
	{
		if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
		{
			rotate_rules(stack_a, stack_b, "ra");
		}
		else
		{
			swap_rules(stack_a, stack_b, "sa");
		}
	}
}

void sort_less_five(t_list **stack_a, t_list **stack_b, size)
{
	
}

void	sort_algo(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 3)
		sort_three(stack_a, stack_b, size);
	if (size < 5)
		sort_less_five(stack_a, stack_b, size);
}
