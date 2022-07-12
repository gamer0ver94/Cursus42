/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:14:41 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/12 17:53:43 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*get_args(int argc, char **argv)
{
	int	i;
	int	*conv_args;

	conv_args = malloc(sizeof(int) * argc);
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

int *split_args(char **argv)
{
	char **tmp;
	int *args;
	int i;
	int j;

	j = 0;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		i++;
	}
	args = (int *)malloc( i * sizeof(int));
	if(!args)
		return(0);
	while (tmp[j])
	{
		args[j] = ft_atoi(tmp[j]);
		j++;
	}
	printf("this is the size for malloc%d\n",i);
	return (args);
}

void	create_stack(t_list **stack_a, int argc, char **argv)
{
	int		i;
	int		*args;

	i = 0;
	if (argc == 2)
		args = split_args(argv);
	else
		args = get_args(argc, argv);
	*stack_a = ft_lstnew((int *)&args[i]);

	while (args[i + 1])
	{
		ft_lstadd_back(stack_a, ft_lstnew(&args[i + 1]));
		i++;
	}
	free(args);
}
