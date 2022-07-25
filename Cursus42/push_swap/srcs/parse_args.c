/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:14:41 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/25 12:23:13 by gameoverstation  ###   ########.fr       */
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

int count_size(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 2;
	}
		return(count);
}

char **convert_to_binary(int *args, int argc)
{
	char **bin;
	char *tmp;
	int i;
	int j;
	j = 0;
	i = 0;

	bin = malloc(sizeof(char) * argc);
	while (args[i])
	{
		j = count_size(args[i]);
		tmp = malloc(sizeof(char) * j + 1);
		while (args[i] > 0)
		{
			if (args[i] % 2 == 1)
				tmp[j - 1] = '1';
			else
				tmp[j - 1] = '0';
			args[i] = args[i] / 2;
			j--;
		}
		tmp[j - 1] = '\0';
		bin[i] = ft_strdup(tmp);
		i++;
	}
	bin[i] = NULL;
	return(bin);
}

char	**parse_args(int argc, char **argv)
{
	int	*args;
	char **bin;
	
	args = get_args(argc, argv);
	bin = convert_to_binary(args, argc);
	free(args);
	return (bin);
}
