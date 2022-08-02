/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:48:19 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/08/02 17:18:29 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


// int convert_to_binary()

int	get_args_size(char **argv)
{
	char **tmp;
	int i ;

	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		i++;
	}
	return (i);
}

int *filter_args(char **argv, int *array, int size)
{
	char **tmp;
	int	i;

	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
		i++;
	array = malloc(sizeof(int) * i);
	i = 0;
	while (i < size)
	{
		array[i] = ft_atoi(tmp[i]);
		i++;
	}
	return (array);
}

int *parse_args(char **argv, int argc)
{
	int *array;
	int i;
	
	i = 1;
	array = malloc(sizeof(int) * argc - 1);
	while (i < argc)
	{
		array[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (array);
}

int *cpy_array(int *array, int size)
{
	int	i;
	int *new_array;

	i = 0;
	new_array = malloc(sizeof(int) * size);
	while (i < size)
	{
		new_array[i] = array[i];
		i++;
	}
	return (new_array);
}

int	*sort_array(int *array, int size)
{
	int i;
	int tmp;
	int j;
	int *sorted_array;

	sorted_array = cpy_array(array, size);
	j = 0;
	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (sorted_array[i] < sorted_array[j])
			{
				tmp = sorted_array[i];
				sorted_array[i] = sorted_array[j];
				sorted_array[j] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (sorted_array);
}

int *transform_array(int *array, int size)
{
	int *sorted_array;
	int *new_array;
	int i;
	int index;

	i = 0;
	index = 0;
	sorted_array = sort_array(array, size);
	new_array = malloc(sizeof(int) * size);
	while (i < size)
	{
		while (array[i] != sorted_array[index])
		{
			index++;
		}
		new_array[i] = index;
		index = 0;
		i++;
	}
	free (array);
	free (sorted_array);
	return (new_array);
}

int count_size(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		n = n / 2;
		count++;
	}
		return(count);
}

int get_max_index(int *args, int size)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (i < size)
	{
		if (count_size(args[i]) > res)
			res = count_size(args[i]);
		i++;
	}
	return (res);
}

char **convert_to_binary(int *args, int size)
{
	char **bin;
	char *tmp;
	int i;
	int max;
	int j;

	i = 0;
	j = get_max_index(args, size);
	bin = malloc(sizeof(char *) * size + 1);
	while (i < size)
	{
		max = j;
		tmp = ft_calloc(max + 1, sizeof(char));
		while (args[i] > 0)
		{
			if (args[i] % 2 == 1)
				tmp[max - 1] = '1';
			else
				tmp[max - 1] = '0';
			args[i] = args[i] / 2;
			max--;
		}
		while (max > 0)
		{
			tmp[max - 1] = '0';
			max--;
		}
		bin[i] = ft_strdup((char *)tmp);
		i++;
	}
	bin[i] = NULL;
	return(bin);
}

int	create_stack(t_list **stack_a, char **argv, int argc)
{
	int		*array;
	char	**bin;
	int		size;
	int		i;

	i = 0;
	array = NULL;
	if (argc == 2)
	{
		size = get_args_size(argv);
		array = filter_args(argv, array, size);
		array = transform_array(array, size);
		bin = convert_to_binary(array, size);
	}
	else
	{
		size = argc - 1;
		array = parse_args(argv, argc);
		array = transform_array(array, size);
		bin = convert_to_binary(array, argc);
	}
	while (i < size)
	{
		ft_lstadd_back(stack_a, ft_lstnew((char **)bin[i]));
		i++;
	}
	return (size);
}
