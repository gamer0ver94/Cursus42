/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:06:45 by dpaulino          #+#    #+#             */
/*   Updated: 2022/07/10 12:30:08 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void sort_three(t_list **stack_a, t_list **stack_b, int size)
// {
// 	while (sort_verification(stack_a) == 1 || ft_lstsize(*stack_a) != size)
// 	{
// 		if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
// 		{
// 			rotate_rules(stack_a, stack_b, "ra");
// 		}
// 		else
// 		{
// 			swap_rules(stack_a, stack_b, "sa");
// 		}
// 	}
// }

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
	i = 0;
	while (array[i])
	{
		printf("%d\n",array[i]);
		i++;
	}
	return(array);
}

int is_array_sorted(int *array)
{
	int i;

	i = 0;
	while(array[i])
	{
		if(array[i] > array[i + 1] && array[i + 1])
		{
			return(1);
		}
		i++;
	}
	return (0);
}

int found_mid_num(int *array, int size)
{
	int i;
	int tmp;
	i = 0;
	while(is_array_sorted(array) == 1)
	{
		if(!array[i])
			i = 0;
		if(array[i + 1] && array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
		}
		i++;
	}
	// if(size % 2 == 0)
	// 	return(array[(size / 2) - 1]);
	return(array[(size / 2)]);
}

int verify_stack_a(t_list **stack_a)
{
	t_list	*current;

	current = *stack_a;
	while (current->next != NULL)
	{
		if (current->next->content != NULL)
		{
			if (*(int *)current->content > *(int *)current->next->content)
			{
				return (1);
			}
		}
		current = current->next;
	}
	return (0);
}

int verify_stack_b(t_list **stack_b)
{
	t_list	*current;

	current = *stack_b;
	while (current->next != NULL)
	{
		if (current->next->content != NULL)
		{
			if (*(int *)current->content < *(int *)current->next->content)
			{
				return (1);
			}
		}
		current = current->next;
	}
	return (0);
}

int found_mid_num(int *array, int size)
{
	int i;
	int tmp;
	i = 0;
	while(is_array_sorted(array) == 1)
	{
		if(!array[i])
			i = 0;
		if(array[i + 1] && array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
		}
		i++;
	}
	// if(size % 2 == 0)
	// 	return(array[(size / 2) - 1]);
	return(array[(size / 2)]);
}

void	sort_algo(t_list **stack_a, t_list **stack_b, int size)
{
	int	*sorted_array;
	int mid_num;
	sorted_array = list_to_array(*stack_a, size);
	// mid_num = found_mid_num(sorted_array, size);
	//divide list
	while(sort_verification(stack_a) == 1 && ft_lstsize(*stack_a) != (size / 2) + 1)
	{
		if(*(int *)(*stack_a)->content < mid_num)
		{
			push_rules(stack_a,stack_b,"pb");
		}
		else
		{
			rotate_rules(stack_a,stack_b,"ra");
			swap_rules(stack_a,stack_b,"sa");
		}
	}
	while(verify_stack_b(stack_b) == 1)
	{
		if((*stack_b)->next != NULL && *(int *)(*stack_b)->content > *(int *)(*stack_b)->next->content)
		{
			rotate_rules(stack_a,stack_b, "rb");
		}
		else
			swap_rules(stack_a, stack_b,"sb");
	}
	while(verify_stack_a(stack_a) == 1)
	{
		if((*stack_a)->next != NULL && *(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
		{
			rotate_rules(stack_a, stack_a, "ra");
		}
		else
			swap_rules(stack_a, stack_b, "sa");
	}
	print_list(*stack_a, *stack_b);
	
	// if (size == 3)
	// 	sort_three(stack_a, stack_b, size);
	// if (size < 5)
	// 	sort_less_five(stack_a, stack_b, size);
	// if (size > 5)
	// 	p(stack_a, stack_b, size);
}
