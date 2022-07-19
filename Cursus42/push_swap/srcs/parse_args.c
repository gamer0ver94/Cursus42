/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:14:41 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/19 10:40:22 by gameoverstation  ###   ########.fr       */
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

int	*parse_args(int argc, char **argv)
{
	int	*args;

	args = get_args(argc, argv);
	return (args);
}
