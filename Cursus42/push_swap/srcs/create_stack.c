/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:14:41 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/29 18:09:53 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*get_args(int argc, char **argv)
{
	int	i;
	int	*conv_args;

	conv_args = malloc(sizeof(int) * argc - 1);
	if (conv_args == NULL)
		exit(1);
	i = 0;
	while (argv[i + 1])
	{
		if (*argv[i + 1] >= 'a' && *argv[i + 1] <= 'z')
		{
			printf("error\n");
			free(conv_args);
			exit(1);
		}
		conv_args[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (conv_args);
}

void	create_stack(t_list **stack_a, int argc, char **argv)
{
	int		i;
	int		*args;

	args = get_args(argc, argv);
	i = 0;
	*stack_a = ft_lstnew((int *)&args[i]);
	while (args[i + 1])
	{
		ft_lstadd_back(stack_a, ft_lstnew(&args[i + 1]));
		i++;
	}
}
