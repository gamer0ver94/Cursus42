/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:19 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/25 12:28:48 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	create_stack(t_list **stack_a, char **args)
{
	int		i;

	i = 0;
	*stack_a = ft_lstnew(args[i]);
	i++;
	while (args[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(args[i]));
		i++;
	}
}
