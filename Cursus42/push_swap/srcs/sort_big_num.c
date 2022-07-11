/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:06 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/11 18:02:14 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	array_lenght(int *array)
{
	int	i;

	i = 0;
	if (array)
	{
		while (array[i])
		i++;
	}
	else
		return (0);
	return (i);
}

int	*list_to_array(t_list *stack_a, int size)
{
	t_list	*tmp;
	int		i;
	int		*array;

	i = 0;
	array = malloc(sizeof(int) * size);
	tmp = stack_a;
	while (tmp->next != NULL)
	{
		array[i] = *(int *)tmp->content;
		tmp = tmp->next;
		i++;
	}
	array[i] = *(int *)tmp->content;
	return (array);
}

int	is_array_sorted(int *array)
{
	int	i;

	i = 0;
	while (array && array[i])
	{
		if (array[i] > array[i + 1] && array[i + 1])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	find_max_num(int *array)
{
	int	i;
	int	tmp;

	if (!array)
		return (0);
	i = 0;
	while (array[i])
	{
		if (!array[i])
			i = 0;
		if (array[i + 1] && array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
		}
		i++;
	}
	return (array[array_lenght(array) - 1]);
}

int	*update_array(int *array, int min_num)
{
	int	i;
	int	j;
	int	*new_array;

	new_array = malloc(sizeof(int) * array_lenght(array) - 1);
	if (!new_array)
		return (NULL);
	j = 0;
	i = 0;
	while (array[i])
	{
		if (array[i] == min_num)
			i++;
		new_array[j] = array[i];
		j++;
		i++;
	}
	free(array);
	return (new_array);
}

void	sort_big_num(t_list **stack_a, t_list **stack_b, int size)
{
	int	*array;
	int	max_num;
	int i;
	i = 0;
	array = list_to_array(*stack_a, size);
	max_num = find_max_num(array);
	while (*stack_a != NULL)
	{
		if (*(int *)(*stack_a)->content == max_num)
		{
			push_rules(stack_a, stack_b, "pb");
			array = update_array(array, max_num);
			max_num = find_max_num(array);
		}
		else
		{
			rotate_rules(stack_a, stack_b, "ra");
		}
		i++;
	}
}
