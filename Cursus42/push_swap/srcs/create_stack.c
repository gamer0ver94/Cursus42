/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:19 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/13 14:05:37 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	create_stack(t_list **stack_a, int **args)
{
	int		i;
	int		*tmp;

	tmp = *args;
	i = 0;
	*stack_a = ft_lstnew(&tmp[i]);
	while (tmp[i + 1])
	{
		ft_lstadd_back(stack_a, ft_lstnew(&tmp[i + 1]));
		i++;
	}
}
