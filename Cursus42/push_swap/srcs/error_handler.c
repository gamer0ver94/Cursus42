/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:19:56 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/08/02 16:43:47 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_param(char **param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (param[i])
	{
		while (param[i][j])
		{
			if ((param[i][j] < '0' || param[i][j] > '9') && param[i][j] != '-')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	count_param(char **param)
{
	int	i;

	i = 0;
	while (param[i])
		i++;
	return (i);
}

int	check_doubles(char **param)
{
	int	*lst;
	int	i;
	int	j;

	lst = malloc(sizeof(int) * count_param(param));
	i = 0;
	j = 0;
	while (param[i])
	{
		lst[i] = ft_atoi(param[i]);
		i++;
	}
	i = 0;
	while (i < count_param(param))
	{
		while (j < count_param(param))
		{
			if (i == j)
				j++;
			if (lst[j] == lst[i])
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	error_handler(int argc, char **argv)
{
	char	**param;

	if (argc == 2)
	{
		param = ft_split(argv[1], ' ');
		if (check_param(param) == 1)
		{
			free(param);
			return (1);
		}
		if (check_doubles(param) == 1)
		{
			free(param);
			return (1);
		}
	}
	else
	{
		if (check_param(argv + 1) == 1)
			return (1);
		if (check_doubles(argv + 1) == 1)
			return (1);
	}
	return (0);
}
