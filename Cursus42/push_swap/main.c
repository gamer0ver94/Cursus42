/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:11:06 by dpaulino          #+#    #+#             */
/*   Updated: 2022/07/04 12:20:58 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 2)
		error_handler(1);
	create_stack(&stack_a, argc, argv);
	print_list(stack_a, stack_b);
	if (sort_verification(&stack_a) != 0)
	{
		// swap_rules(&stack_a, &stack_b, "sa");
		// print_list(stack_a, stack_b);
		push_rules(&stack_a, &stack_b, "pa");
		print_list(stack_a, stack_b);
		push_rules(&stack_a, &stack_b, "pa");
		print_list(stack_a, stack_b);
		swap_rules(&stack_a, &stack_b, "sb");
		print_list(stack_a, stack_b);
		swap_rules(&stack_a, &stack_b, "ss");
		print_list(stack_a, stack_b);
		push_rules(&stack_a, &stack_b, "pb");
		print_list(stack_a, stack_b);
	}
	return (0);
}
