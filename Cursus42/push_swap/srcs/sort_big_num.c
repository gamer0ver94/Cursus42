/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:06 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/19 11:53:26 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
int	count_array(int *array)
{
	int	i;

	i = 0;
	while(array[i])
		i++;
	return(i);
}

int	*array_cpy(int *args)
{
	int	i;
	int	*new_args;

	i = 0;
	new_args = malloc(sizeof(int) * count_array(args) + 1);
	while (args[i])
	{
		new_args[i] = args[i];
		i++;
	}
	return (new_args);
}

int *quick_sort(int *args)
{
	int	i;
	int	tmp;
	int *swap;

	swap = array_cpy(args);
	i = 0;
	while (swap[i] && swap[i + 1])
	{
		if (swap[i] < swap[i + 1])
		{
			i++;
		}
		else
		{
			tmp = swap[i];
			swap[i] = swap[i + 1];
			swap[i + 1] = tmp;
			i = 0;
		}
	}
	return(swap);
}

int	find_mid_point(int **args)
{
	int mid_point;
	int *args_update;
	int	i;
	int j;

	j = 0;
	i = 0;
	args_update = malloc(sizeof(int) * (count_array(*args) / 2));
	mid_point = *args[count_array(*args) / 2];
	while(*args[i])
	{
		if(*args[i] >= mid_point)
		{
			args_update[j] = *args[i];
			j++;
		}
		i++;
	}
	return(*args[count_array(*args) / 2]);
}

void	sort_big_num(t_list **stack_a, t_list **stack_b, int *args)
{
	int	mid_point;
	int	*sorted_args;
	int test;

	test = 0;
	sorted_args = quick_sort((args));
	mid_point = find_mid_point(&sorted_args);
	
	while(ft_lstsize(*stack_a) != count_array(sorted_args) / 2)
	{
		if (*(int *)(*stack_a)->content < mid_point)
		{
			push_rules(stack_a, stack_b, "pb");
		}
		else
			rotate_rules(stack_a, stack_b, "ra");
	}
	mid_point = find_mid_point(&sorted_args);
	while(sorted_args[test])
	{
		printf("%d\n",sorted_args[test]);
		test++;
	}
	printf("%d",sorted_args[0]);
}
