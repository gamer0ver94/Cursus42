/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:11:06 by dpaulino          #+#    #+#             */
/*   Updated: 2022/07/19 10:49:56 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*args;

	stack_a = NULL;
	stack_b = NULL;
	args = parse_args(argc, argv);
	if (argc < 2)
		error_handler(1);
	create_stack(&stack_a, &args);
	sort_big_num(&stack_a, &stack_b, args);
	free(args);
	return (0);
}
// program bugs with zero
//needs to handle error for doubles
//free list at the end