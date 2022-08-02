/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:11:06 by dpaulino          #+#    #+#             */
/*   Updated: 2022/08/02 17:19:46 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (error_handler(argc, argv) == 1)
	{
		printf("ERROR\n");
		return (1);
	}
	
	if (create_stack(&stack_a, argv, argc) > 5)
	{
		sort_big_num(&stack_a, &stack_b);
	}
	else
		printf("small sort");
	return (0);
}